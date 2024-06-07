FROM golang:1.22-alpine as build

WORKDIR /usr/src/app

RUN go mod init fullcycle

COPY . .
RUN go build

FROM scratch

WORKDIR /app

COPY --from=build /usr/src/app/fullcycle .

CMD ["./fullcycle"]