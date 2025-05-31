---

## 🇬🇧 ENGLISH 

# Using the Floating Point Unit (FPU) with Tiva C Series TM4C123G LaunchPad

This project demonstrates the use of the **Floating Point Unit (FPU)** on the **Tiva C Series TM4C123G LaunchPad**. The FPU is a hardware unit designed to accelerate floating-point mathematical operations. This project involves calculating sample points for a sine wave, but the main focus is on enabling and utilizing the FPU efficiently.

---

## 📋 Project Summary

- **Floating Point Unit (FPU):**
  - The FPU provides high performance for floating-point operations.
  - This project demonstrates how to enable the FPU, integrate it with the system clock, and utilize it for mathematical tasks.

- **Mathematical Operations:**
  - Functions such as `sinf()` are used from the **math.h** library to perform floating-point calculations.
  - A sine wave is calculated over sample points, with emphasis on how the FPU accelerates these operations.

---

## 🛠 Requirements

### Hardware:
- Tiva C Series TM4C123G LaunchPad

### Software:
- **Code Composer Studio (CCS)**  
- **TivaWare API Library**

---

## 📂 Project Logic

1. **Enabling the FPU:**
   - The FPU is enabled using `ROM_FPUEnable()`.
   - `ROM_FPULazyStackingEnable()` is called to allow more efficient handling of floating-point operations.

2. **System Clock Configuration:**
   - The microcontroller's clock is set to **80 MHz** using `ROM_SysCtlClockSet()`.

3. **Mathematical Calculations:**
   - Floating-point operations are performed using `sinf()`.
   - Results are stored in an array and can be further processed if needed.

---

## 📄 File Structure

- **main.c:** Main file containing FPU setup and sine wave calculation.

---

## 🚀 Setup and Execution

1. **Compile and Upload the Code:**
   - Open the project in Code Composer Studio.
   - Compile and upload the code to the Tiva C microcontroller.

2. **Run:**
   - When the code is executed, sample points for the sine wave are calculated.
   - You can observe how the FPU optimizes the execution of floating-point operations.

---






---

## 🇹🇷 TÜRKÇE 

---


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
