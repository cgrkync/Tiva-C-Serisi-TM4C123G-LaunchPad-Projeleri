# Tiva C Serisi LaunchPad ile 16x2 LCD Arayüzü

Bu proje, **Tiva C Serisi TM4C123G LaunchPad** kullanılarak **16x2 LCD ekranın** temel işlevlerini göstermek amacıyla geliştirilmiştir. Proje, GPIO pinleri aracılığıyla LCD ekranın kontrolünü sağlar ve temel LCD komutlarını uygulamalı olarak öğretir. Kodlar **Code Composer Studio** ortamında yazılmış ve test edilmiştir.

---

## 📋 Proje Özeti

- **LCD Kontrolü:**
  - LCD, **4-bit modda** çalıştırılmıştır.
  - GPIO pinleri kullanılarak karakterler ve komutlar LCD'ye gönderilmiştir.
- **Başlıca İşlevler:**
  - LCD'ye metin yazdırma.
  - LCD'nin temizlenmesi ve imleç kontrolü.
  - LCD ekranın kontrast ayarı.

---

## 🛠 Gerekli Malzemeler

- **16x2 LCD Ekran**
- **10kΩ Potansiyometre** (LCD kontrast ayarı için)
- **Breadboard**
- **Bağlantı Kabloları**
- **Tiva C Serisi TM4C123G LaunchPad**

---

## ⚙️ Bağlantılar

| LCD Pin  | TM4C123G LaunchPad Pin |
|----------|-------------------------|
| VSS      | GND                     |
| VDD      | VBUS                    |
| V0       | Potansiyometre          |
| RS       | PB0                     |
| RW       | GND                     |
| E        | PB1                     |
| D4       | PB4                     |
| D5       | PB5                     |
| D6       | PB6                     |
| D7       | PB7                     |
| A        | 5V                      |
| K        | GND                     |

---

## 🚀 Projenin Çalıştırılması

1. **Donanımı Bağla:**
   - Yukarıdaki tabloya göre LCD ekranı ve potansiyometreyi Tiva C LaunchPad'e bağlayın.
   - LCD'nin V0 pini ile potansiyometreyi bağlayarak kontrast ayarını yapabilirsiniz.

2. **Kodları Derle ve Yükle:**
   - **Code Composer Studio**'da proje dosyalarını açın.
   - Kodu derleyip Tiva C mikrodenetleyiciye yükleyin.

3. **Çalıştır:**
   - Tiva C'nin güç bağlantısını sağlayın.
   - LCD üzerinde metinlerin ve temel komutların çalıştığını gözlemleyin.

---

## 📝 İlgili Notlar

- LCD ekran **4-bit modda** çalıştırılmıştır. Bu, daha az GPIO pini kullanarak ekran kontrolü sağlar.
- Potansiyometre kullanılarak LCD kontrastı kolayca ayarlanabilir.
- RW pini GND'ye bağlanmıştır, bu nedenle LCD sadece **yazma modu**nda çalışır.

---


