FROM node:21-alpine

WORKDIR /app

COPY package*.json ./

RUN npm cache clean --force

RUN npm install

COPY . .

ENTRYPOINT ["npm", "start"]