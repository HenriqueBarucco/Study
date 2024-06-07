FROM node:21-alpine

WORKDIR /app

COPY package.json /app

RUN npm install

ENTRYPOINT ["npm", "start"]