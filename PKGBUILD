pkgname="stopwatchcli"
pkgver="1.0.5"
pkgrel=1
pkgdescs="it is a simple cli stopwatch"
arch=("x86_64")
license=("MIT")
source=("$pkgname")
sha256sums=("SKIP")


build() {
  cd ".."
  cmake .
  make
}

package() {
  mkdir -p "${pkgdir}/usr/bin"
  cp "${srcdir}/stopwatchcli" "${pkgdir}/usr/bin/stopwatchcli"
  chmod +x "${pkgdir}/usr/bin/stopwatchcli"
}

