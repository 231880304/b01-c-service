# B01 C/Make service project

Small C service used by B01 for the DevOps E12 real-project integration.

- `main.c` prints `VALUE + helper()` from `config.h`.
- `helper.c` provides a zero-value helper.
- `Makefile` builds `app`; it intentionally declares an incomplete dependency set so EChecker can detect MD/RD.
- `Dockerfile.broken` builds the project without a toolchain, reproducing the missing `make` failure.

Build:

```sh
make app
./app
```
