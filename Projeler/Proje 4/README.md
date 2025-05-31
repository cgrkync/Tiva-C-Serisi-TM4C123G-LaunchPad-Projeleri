---

## 🇬🇧 ENGLISH 

# Serial Communication with SharpDevelop and Tiva C Series TM4C123G LaunchPad

This project includes a serial communication application developed using the **Tiva C Series TM4C123G LaunchPad** and **SharpDevelop**. The goal is to synchronize clock and text data between the LCD and SharpDevelop, as well as to measure temperature using the **LM35DZ temperature sensor**.

---

## 📋 Project Summary

- **Clock Function:**
  - The user enters a time value via the SharpDevelop interface.
  - This time is received by Tiva C and displayed on a 16x2 LCD screen, and starts counting.
  - The current time is also continuously shown in the SharpDevelop interface.

- **Temperature Measurement:**
  - The **LM35DZ temperature sensor** is read using the ADC module of the Tiva C.
  - The measured temperature is displayed on both the LCD and the SharpDevelop interface.

- **Text Transmission:**
  - When the user enters a message in SharpDevelop, it is displayed on the second row of the LCD.

---

## 🛠 Requirements

### Hardware:
- Tiva C Series TM4C123G LaunchPad  
- 16x2 LCD Display  
- **LM35DZ Temperature Sensor**  
- Potentiometer (for LCD contrast adjustment)  
- Jumper wires  

### Software:
- **Code Composer Studio (CCS)**  
- **SharpDevelop**  
- **TivaWare API Library**

---

## ⚙️ Hardware Connections

### LCD Connections:

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

### LM35DZ Connections:

| Sensor Pin | Tiva C LaunchPad Pin |
|------------|-----------------------|
| VCC        | 3.3V                  |
| GND        | GND                   |
| OUT        | PE3 (ADC input pin)   |

---

## 📂 Project Logic

1. **Clock Setup:**
   - Time is entered via the SharpDevelop interface.
   - This time is sent via serial port to Tiva C, shown on the first row of the LCD, and begins counting.
   - The time is also continuously updated in the SharpDevelop interface.

2. **Temperature Measurement:**
   - Temperature data is read from the LM35DZ sensor via the ADC module.
   - The value is displayed on the LCD alongside the time.
   - It is also transmitted to the SharpDevelop interface for display.

3. **Text Display:**
   - When a message is entered in SharpDevelop, it is shown on the second row of the LCD.

---

## 📄 File Structure

- **main.c:** Main control code for Tiva C  
- **lcd.h:** Header file for LCD control  
- **lcd.c:** Functions for LCD communication via GPIO  

---

## 🚀 Setup and Execution

1. **Connect the Hardware:**
   Connect the LCD, LM35DZ sensor, and other components to the Tiva C LaunchPad according to the table above.

2. **Compile and Upload the Code:**
   - Open the project in Code Composer Studio  
   - Compile and upload it to the Tiva C  

3. **SharpDevelop Interface:**
   - Open and run the SharpDevelop project  
   - Select the COM port to which the Tiva C is connected  

4. **Run:**
   - Enter time and text in SharpDevelop  
   - Observe synchronized updates on both the LCD and SharpDevelop interface  

---

<img width="432" alt="image" src="https://github.com/user-attachments/assets/cc353177-a796-4678-8aab-b9025833c01e" />







---

## 🇹🇷 TÜRKÇE 

---

# Tiva C Serisi TM4C123G LaunchPad ile SharpDevelop ve Seri Port Haberleşmesi

Bu proje, **Tiva C Serisi TM4C123G LaunchPad** ve **SharpDevelop** ortamı kullanılarak gerçekleştirilen bir seri haberleşme uygulamasını içerir. Projede, saat ve metin bilgilerinin LCD ve SharpDevelop arasında senkronize edilmesi, ayrıca **LM35DZ sıcaklık sensörü** ile sıcaklık ölçümü yapılması sağlanmaktadır.

---

## 📋 Proje Özeti

- **Saat İşlevi:**
  - Kullanıcı, SharpDevelop arayüzünden bir saat bilgisi girer.
  - Bu saat bilgisi, Tiva C üzerinden 16x2 LCD'ye yazdırılır ve saymaya başlar.
  - Saat bilgisi, SharpDevelop arayüzünde de güncel olarak gösterilir.

- **Sıcaklık Ölçümü:**
  - **LM35DZ sıcaklık sensörü**, Tiva C'nin ADC modülü ile okunur.
  - Ölçülen sıcaklık hem LCD'de hem de SharpDevelop arayüzünde gösterilir.

- **Metin Gönderimi:**
  - Kullanıcı, SharpDevelop üzerinden bir metin girdiğinde bu metin LCD'nin ikinci satırında gösterilir.

---

## 🛠 Gereksinimler

### Donanım:
- Tiva C Serisi TM4C123G LaunchPad
- 16x2 LCD Ekran
- **LM35DZ Sıcaklık Sensörü**
- Potansiyometre (LCD kontrast ayarı için)
- Bağlantı kabloları

### Yazılım:
- **Code Composer Studio (CCS)**
- **SharpDevelop**
- **TivaWare API Kütüphanesi**

---

## ⚙️ Donanım Bağlantıları

### LCD Bağlantıları:
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


### LM35DZ Bağlantıları:
| Sensör Pin | Tiva C LaunchPad Pin |
|------------|-----------------------|
| VCC        | 3.3V                 |
| GND        | GND                  |
| OUT        | PE3 (ADC giriş pini) |

---

## 📂 Proje Çalışma Mantığı

1. **Saat Ayarı:**
   - SharpDevelop üzerinden saat bilgisi girilir.
   - Seri port ile Tiva C'ye gönderilen bu bilgi, LCD'nin ilk satırında gösterilir ve saymaya başlar.
   - Aynı saat bilgisi, SharpDevelop arayüzünde de sürekli güncellenir.

2. **Sıcaklık Ölçümü:**
   - LM35DZ sensöründen ADC modülü aracılığıyla sıcaklık verisi okunur.
   - Okunan sıcaklık değeri LCD'nin ilk satırında saatle birlikte gösterilir.
   - Sıcaklık verisi, aynı zamanda SharpDevelop arayüzüne gönderilir ve orada da gösterilir.

3. **Metin Gönderimi:**
   - SharpDevelop üzerinden bir metin girildiğinde, bu metin LCD'nin ikinci satırında gösterilir.

---

## 📄 Dosya Yapısı

- **main.c:** Tiva C ana kontrol kodu.
- **lcd.h:** LCD kontrolü için kullanılan header dosyası.
- **lcd.c:** LCD'nin GPIO ile haberleşmesini sağlayan fonksiyonlar.

---

## 🚀 Kurulum ve Çalıştırma

1. **Donanımı Bağla:**
   Yukarıdaki tabloya göre LCD, LM35DZ sensörü ve diğer bileşenleri Tiva C LaunchPad'e bağla.

2. **Kodları Derle ve Yükle:**
   - Code Composer Studio'da proje dosyalarını aç.
   - Kodu derle ve Tiva C'ye yükle.

3. **SharpDevelop Arayüzü:**
   - SharpDevelop projesini aç ve çalıştır.
   - Tiva C'nin bağlı olduğu COM portunu seç.

4. **Çalıştır:**
   - SharpDevelop üzerinden saat ve metin bilgisi gir.
   - LCD'de ve SharpDevelop'ta bilgilerin senkronize olarak güncellendiğini gözlemle.
---
<img width="432" alt="image" src="https://github.com/user-attachments/assets/cc353177-a796-4678-8aab-b9025833c01e" />

