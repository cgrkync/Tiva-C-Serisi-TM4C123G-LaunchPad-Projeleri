# Tiva C Serisi TM4C123G LaunchPad Projeleri

Bu repo, **Tiva C Serisi TM4C123G LaunchPad** kullanılarak geliştirilmiş çeşitli projeleri içermektedir. Projeler, mikrodenetleyici uygulamaları, LCD kullanımı, floating point matematiksel işlemler, hibernate modu ve seri haberleşme gibi konulara odaklanmaktadır.

---

## 📋 Proje Listesi

### 1. **16x2 LCD Kullanımı**
   - **Açıklama:** Tiva C ile **16x2 LCD ekranın** temellerini öğrenmek için tasarlanmış bir projedir. GPIO pinleri ile LCD ekran kontrol edilmiştir.
   - **Özellikler:**
     - LCD ekran, 4-bit modda çalıştırılmıştır.
     - Metin yazdırma ve temel LCD komutları test edilmiştir.
   - **Kullanılan Donanım:**
     - Tiva C Serisi LaunchPad
     - 16x2 LCD ekran
   - [Detaylar için buraya tıklayın.](./Projeler/Proje1/README.md)

---

### 2. **Mikrodenetleyici ile Temel Saat Uygulaması**
   - **Açıklama:** Mikrodenetleyici üzerinde bir timer kullanılarak **00:00:00**'dan itibaren başlayan ve sürekli olarak saniyeyi artıran bir saat uygulaması gerçekleştirilmiştir.
   - **Özellikler:**
     - Timer modülü ile saniye sayımı yapılmıştır.
     - Saat, dakika ve saniye değerleri LCD ekranında gösterilmiştir.
   - **Kullanılan Donanım:**
     - Tiva C Serisi LaunchPad
     - 16x2 LCD ekran
   - [Detaylar için buraya tıklayın.]()

---

### 3. **Seri Port ile Saat Gönderimi**
   - **Açıklama:** SharpDevelop ile seri haberleşme gerçekleştirilerek LCD'de saat gösterimi sağlanmıştır.
   - **Özellikler:**
     - SharpDevelop üzerinden saat bilgisi gönderilir.
     - Saat LCD'de gösterilir ve sürekli sayar.
   - **Kullanılan Donanım:**
     - Tiva C Serisi LaunchPad
     - 16x2 LCD ekran
   - [Detaylar için buraya tıklayın.]()

---

### 4. **Seri Port ile Saat ve Metin Gönderimi**
   - **Açıklama:** SharpDevelop ile seri haberleşme yapılarak hem saat hem de metin bilgisi LCD'de gösterilmiştir.
   - **Özellikler:**
     - Saat ve sıcaklık bilgisi LCD'nin ilk satırında gösterilir.
     - SharpDevelop üzerinden girilen metin LCD'nin ikinci satırında görüntülenir.
   - **Kullanılan Donanım:**
     - Tiva C Serisi LaunchPad
     - LM35DZ sıcaklık sensörü
     - 16x2 LCD ekran
   - [Detaylar için buraya tıklayın.]()

---

### 5. **Hibernate Modu Uygulaması**
   - **Açıklama:** Hibernate modu ile mikrodenetleyici düşük güç moduna geçirilmiş ve RTC veya GPIO ile uyandırma sağlanmıştır.
   - **Özellikler:**
     - GPIO pinlerinin durumu korunur.
     - RTC (Real Time Clock) ile belirli bir süre sonunda sistem uyandırılır.
   - **Kullanılan Donanım:**
     - Tiva C Serisi LaunchPad
     - Harici uyandırma sinyali (ör. buton)
   - [Detaylar için buraya tıklayın.]()

---

### 6. **Floating Point İşlemleri**
   - **Açıklama:** Floating Point Unit (FPU) kullanılarak matematiksel işlemler gerçekleştirilmiş ve bir sinüs dalgası hesaplanmıştır.
   - **Özellikler:**
     - Kayan noktalı işlemler, FPU etkinleştirilerek hızlandırılmıştır.
     - Sinüs dalgası için 100 örnekleme noktası hesaplanmıştır.
   - **Kullanılan Donanım:**
     - Tiva C Serisi LaunchPad
   - [Detaylar için buraya tıklayın.]()

---

## 🚀 Nasıl Kullanılır?

1. Her bir proje için ilgili klasöre giderek **README.md** dosyasını inceleyebilirsiniz.
2. Kodları indirmek ve çalıştırmak için:
   - Repo'yu klonlayın:
     ```bash
     git clone https://github.com/kullanici_adiniz/tiva-projects.git
     ```
   - İlgili proje klasörüne gidin ve kodları inceleyin.
3. Kodları derlemek ve Tiva C LaunchPad'e yüklemek için **Code Composer Studio** kullanın.

---
