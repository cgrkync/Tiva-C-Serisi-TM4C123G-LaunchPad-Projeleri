---

## 🇬🇧 ENGLISH 

# Clock Counter on 16x2 LCD with Tiva C Series TM4C123G LaunchPad

This project implements a clock counter starting from **00:00:00** and continuously incrementing time on a **16x2 LCD display** using the **Tiva C Series TM4C123G LaunchPad**.

---

## 📋 Project Summary

- The clock is initialized at **00:00:00**.
- The time increments by one second continuously.
- The LCD displays time in hours, minutes, and seconds format.
- The LCD is interfaced using Tiva C's **GPIO pins**.
- The code is written and tested in the **Code Composer Studio (CCS)** environment.

---

## 🛠 Requirements

To run this project, the following hardware and software are required:

### Hardware:
- Tiva C Series TM4C123G LaunchPad
- 16x2 LCD Display
- 10kΩ Potentiometer (for LCD contrast adjustment)
- Jumper wires

### Software:
- Code Composer Studio (CCS)
- TivaWare API Library

---

## ⚙️ Connections

| LCD Pin  | TM4C123G LaunchPad Pin |
|----------|-------------------------|
| VSS      | GND                     |
| VDD      | VBUS                    |
| V0       | Potentiometer           |
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

## 📄 Project Logic

1. **Initial State:**
   - The clock starts at **00:00:00**.

2. **Time Measurement:**
   - Time is incremented every second using the timer module of the Tiva C.
   - When seconds reach 60, minutes are incremented.
   - When minutes reach 60, hours are incremented.

3. **LCD Control:**
   - The LCD operates in **4-bit mode** and updates the time every second.
   - Time format displayed: `HH:MM:SS`

---

## 📂 File Structure

- **main.c:** Main source file of the project.
- **lcd.h:** Header file for LCD control.
- **lcd.c:** Functions for communicating with the LCD via GPIO.
- **timer.c:** Functions to manage the Tiva C timer module.

---

## 🚀 Setup and Execution

1. **Connect the Hardware:**
   Connect the LCD to the Tiva C LaunchPad according to the table above.

2. **Compile and Upload the Code:**
   - Open Code Composer Studio.
   - Import the project files.
   - Compile and upload the code to the Tiva C.

3. **Run:**
   - Power the LaunchPad.
   - Observe the time starting from **00:00:00** and incrementing on the LCD display.

---







---

## 🇹🇷 TÜRKÇE 

---

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


