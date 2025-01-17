# Tiva C Serisi TM4C123G LaunchPad ile Floating Point Unit (FPU) Kullanımı

Bu proje, **Tiva C Serisi TM4C123G LaunchPad** üzerinde **Floating Point Unit (FPU)** biriminin kullanımını demonstratif bir şekilde göstermeyi amaçlamaktadır. FPU, kayan noktalı matematiksel işlemleri hızlandırmak için kullanılan bir donanım birimidir. Bu proje kapsamında, sinüs dalgası için örnekleme noktaları hesaplanmıştır, ancak asıl vurgu FPU'nun etkinleştirilmesi ve kullanımı üzerinedir.

---

## 📋 Proje Özeti

- **Floating Point Unit (FPU):**
  - FPU, kayan noktalı işlemler için yüksek performans sağlar.
  - Bu proje, FPU'nun etkinleştirilmesini, sistem saatine entegrasyonunu ve matematiksel işlemlerde nasıl kullanıldığını gösterir.

- **Matematiksel İşlemler:**
  - `sinf()` gibi kayan noktalı fonksiyonlar, **math.h** kütüphanesi kullanılarak gerçekleştirilir.
  - Örnekleme noktaları üzerinden sinüs dalgası hesaplanır, ancak proje daha çok FPU'nun bu işlemleri nasıl hızlandırdığına odaklanır.

---

## 🛠 Gereksinimler

### Donanım:
- Tiva C Serisi TM4C123G LaunchPad

### Yazılım:
- **Code Composer Studio (CCS)**
- **TivaWare API Kütüphanesi**

---

## 📂 Proje Çalışma Mantığı

1. **FPU Biriminin Etkinleştirilmesi:**
   - `ROM_FPUEnable()` fonksiyonu ile FPU etkinleştirilir.
   - `ROM_FPULazyStackingEnable()` fonksiyonu, kayan noktalı işlemlerin daha verimli bir şekilde gerçekleştirilmesini sağlar.

2. **Sistem Saatinin Ayarlanması:**
   - `ROM_SysCtlClockSet()` ile mikrodenetleyici saat frekansı **80 MHz** olarak ayarlanır.

3. **Matematiksel Hesaplamalar:**
   - Floating point matematiksel işlemler, `sinf()` fonksiyonu ile gerçekleştirilir.
   - Kayan noktalı sonuçlar, diziye kaydedilir ve gerektiğinde işlenebilir.

---

## 📄 Dosya Yapısı

- **main.c:** FPU'nun etkinleştirilmesi ve sinüs dalgası hesaplamasını içeren ana kod.

---

## 🚀 Kurulum ve Çalıştırma

1. **Kodları Derle ve Yükle:**
   - Code Composer Studio'da proje dosyasını aç.
   - Kodu derle ve Tiva C mikrodenetleyiciye yükle.

2. **Çalıştır:**
   - Kod çalıştırıldığında, sinüs dalgası örnekleme noktaları hesaplanır.
   - İşlemlerin FPU kullanılarak optimize edildiğini gözlemleyebilirsiniz.

---
