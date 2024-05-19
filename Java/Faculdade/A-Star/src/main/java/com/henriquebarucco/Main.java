package com.henriquebarucco;

import java.util.*;

class Node implements Comparable<Node> {
    public int x, y;
    public int g, h;
    public Node parent;
    public List<Node> neighbors;

    public Node(int x, int y) {
        this.x = x;
        this.y = y;
        this.g = Integer.MAX_VALUE;
        this.h = 0;
        this.parent = null;
        this.neighbors = new ArrayList<>();
    }

    public int f() {
        return g + h;
    }

    @Override
    public int compareTo(Node other) {
        return Integer.compare(this.f(), other.f());
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj) return true;
        if (obj == null || getClass() != obj.getClass()) return false;
        Node node = (Node) obj;
        return x == node.x && y == node.y;
    }

    @Override
    public int hashCode() {
        return Objects.hash(x, y);
    }

    @Override
    public String toString() {
        return "(" + x + ", " + y + ")";
    }
}

class Graph {
    private final Node[][] nodes;

    public Graph(int[][] adjacencyMatrix) {
        int height = adjacencyMatrix.length;
        int width = adjacencyMatrix[0].length;
        nodes = new Node[width][height];

        // Cria os nós
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                nodes[x][y] = new Node(x, y);
            }
        }

        // Adiciona as arestas
        for (int y = 0; y < height; y++) {
            for (int x = 0; x < width; x++) {
                if (adjacencyMatrix[y][x] == 0) {  // Caminho livre
                    if (x > 0 && adjacencyMatrix[y][x - 1] == 0) nodes[x][y].neighbors.add(nodes[x - 1][y]);
                    if (x < width - 1 && adjacencyMatrix[y][x + 1] == 0) nodes[x][y].neighbors.add(nodes[x + 1][y]);
                    if (y > 0 && adjacencyMatrix[y - 1][x] == 0) nodes[x][y].neighbors.add(nodes[x][y - 1]);
                    if (y < height - 1 && adjacencyMatrix[y + 1][x] == 0) nodes[x][y].neighbors.add(nodes[x][y + 1]);
                }
            }
        }
    }

    public Node getNode(int x, int y) {
        return nodes[x][y];
    }
}

class AStar {
    public static List<Node> findPath(Graph graph, Node start, Node goal) {
        if (start == null || goal == null) return null;

        PriorityQueue<Node> openSet = new PriorityQueue<>();
        Set<Node> closedSet = new HashSet<>();

        start.g = 0;
        start.h = heuristic(start, goal);
        openSet.add(start);

        while (!openSet.isEmpty()) {
            Node current = openSet.poll();

            if (current.equals(goal)) {
                return reconstructPath(current);
            }

            closedSet.add(current);

            for (Node neighbor : current.neighbors) {
                if (closedSet.contains(neighbor)) continue;

                int tentativeG = current.g + 1;

                if (!openSet.contains(neighbor) || tentativeG < neighbor.g) {
                    neighbor.parent = current;
                    neighbor.g = tentativeG;
                    neighbor.h = heuristic(neighbor, goal);

                    if (!openSet.contains(neighbor)) {
                        openSet.add(neighbor);
                    }
                }
            }
        }

        return null; // Caminho não encontrado
    }

    private static int heuristic(Node a, Node b) {
        // Distância de Manhattan
        return Math.abs(a.x - b.x) + Math.abs(a.y - b.y);
    }

    private static List<Node> reconstructPath(Node node) {
        List<Node> path = new ArrayList<>();
        while (node != null) {
            path.add(node);
            node = node.parent;
        }
        Collections.reverse(path);
        return path;
    }

    public static void main(String[] args) {
        // Matriz de adjacência - 0: caminho livre, 1: obstáculo
        int[][] adjacencyMatrix = {
                {0, 0, 1, 0, 0},
                {0, 0, 0, 1, 0},
                {1, 0, 0, 0, 1},
                {0, 1, 0, 0, 0},
                {0, 0, 1, 0, 0}
        };

        Graph graph = new Graph(adjacencyMatrix);
        Node start = graph.getNode(0, 0);
        Node goal = graph.getNode(4, 4);

        List<Node> path = findPath(graph, start, goal);

        if (path != null) {
            for (Node node : path) {
                System.out.println(node);
            }
        } else {
            System.out.println("Caminho não encontrado.");
        }
    }
}