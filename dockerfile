FROM ocaml/opam:debian

USER root

# OCaml dependencies
RUN opam update && \
    opam switch 4.02.3 && \
    opam install reason.3.0.0 && \
    opam install merlin.2.5.4

# Node dependencies 
RUN (curl -sL https://deb.nodesource.com/setup_8.x | bash -) && \
    apt-get install -y nodejs --no-install-recommends

WORKDIR /app
COPY . .

# Installing bs-platform globally runs into a permission issue
RUN npm install --save-dev bs-platform && \
    npm install

EXPOSE 3000
