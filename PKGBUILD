pkgname="stopwatchcli"
pkgver="1.0.0"
pkgrel=1
pkgdescs="it is a simple cli stopwatch"
arch=("x86_64")
license=("MIT")
source=("$pkgname-1")
sha256sums=("SKIP")

package() {
  cd ".."
  cmake .
  make
  mkdir -p "${pkgdir}/usr/bin"
  cp "${srcdir}/stopwatchcli" "${pkgdir}/usr/bin/stopwatchcli"
  chmod +x "${pkgdir}/usr/bin/stopwatchcli"
}

