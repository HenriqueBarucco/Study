import mysql from 'mysql2';
import util from 'util';

const dbConfig = {
    host: 'db',
    user: 'root',
    password: 'root',
    database: 'db',
};

export default class Database {
    constructor() {
        this.connection = mysql.createConnection(dbConfig);
    }

    async insertName(name) {
        const INSERT_QUERY = `INSERT INTO people(name) values('${name}')`;

        this.connection.query(INSERT_QUERY, (error, _results, _fields) => {
            if (error) {
                throw new Error(`Error inserting name: ${error}`);
            }
        });
    }

    async getAll() {
        const SELECT_QUERY = `SELECT id, name FROM people`;

        const query = util.promisify(this.connection.query).bind(this.connection);
    
        try {
            const results = await query(SELECT_QUERY);
            return results;
        } catch (error) {
            throw new Error(`Error getting people: ${error}`);
        }
    }
}