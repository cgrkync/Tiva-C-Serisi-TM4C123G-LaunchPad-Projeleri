# Tiva C Serisi TM4C123G LaunchPad ile 16x2 LCD'de Saat Sayacı

Bu proje, **Tiva C Serisi TM4C123G LaunchPad** kullanılarak bir **16x2 LCD ekranında** saati **00:00:00**'dan başlayarak sürekli saydıran bir uygulamayı içerir.

---

## 📋 Proje Özeti

- Saat başlangıçta **00:00:00** olarak ayarlanır.
- Her saniye bir artış yapılarak saat saydırılır.
- LCD ekran, saniye, dakika ve saat formatında zaman bilgisini görüntüler.
- Tiva C'nin **GPIO pinleri** kullanılarak LCD ile bağlantı sağlanır.
- Kod, **Code Composer Studio (CCS)** ortamında yazılmış ve test edilmiştir.

---

## 🛠 Gereksinimler

Projeyi çalıştırmak için aşağıdaki donanım ve yazılımlar gereklidir:

### Donanım:
- Tiva C Serisi TM4C123G LaunchPad
- 16x2 LCD Ekran
- 10kΩ Potansiyometre (LCD kontrast ayarı için)
- Bağlantı kabloları

### Yazılım:
- Code Composer Studio (CCS)
- TivaWare API Kütüphanesi

---

## ⚙️ Bağlantılar

| LCD      | TM4C123G LaunchPad       |
|----------|--------------------------|
| VSS      | GND                      |
| VDD      | VBUS                     |
| V0       | Potentiometer            |
| RS       | PB0                      |
| RW       | GND                      |
| E        | PB1                      |
| D4       | PB4                      |
| D5       | PB5                      |
| D6       | PB6                      |
| D7       | PB7                      |
| A        | 5V                       |
| K        | GND                      |


---

## 📄 Proje Çalışma Mantığı

1. **Başlangıç Durumu:**
   - Saat **00:00:00** olarak başlatılır.

2. **Süre Ölçümü:**
   - Tiva C'nin timer modülü kullanılarak her saniyede bir zaman artırılır.
   - Saniyeler 60 olduğunda dakikalar, dakikalar 60 olduğunda saatler bir artar.

3. **LCD Kontrolü:**
   - LCD, **4-bit modda** çalıştırılır ve zaman bilgisi her saniyede bir güncellenir.
   - Zaman formatı: `HH:MM:SS`

---

## 📂 Dosya Yapısı

- **main.c:** Projenin ana kod dosyası.
- **lcd.h:** LCD kontrolü için kullanılan header dosyası.
- **lcd.c:** LCD'nin GPIO ile haberleşmesini sağlayan fonksiyonlar.
- **timer.c:** Tiva C timer modülünü kontrol eden fonksiyonlar.

---

## 🚀 Kurulum ve Çalıştırma

1. **Donanımı Bağla:**
   Yukarıdaki tabloya göre LCD'yi Tiva C LaunchPad'e bağla.

2. **Kodları Derle ve Yükle:**
   - Code Composer Studio'yu aç.
   - Proje dosyalarını import et.
   - Kodu derle ve Tiva C'ye yükle.

3. **Çalıştır:**
   - LaunchPad'i güç kaynağına bağla.
   - LCD'de saatin **00:00:00**'dan başlayarak saymaya başladığını gözlemle.

---


