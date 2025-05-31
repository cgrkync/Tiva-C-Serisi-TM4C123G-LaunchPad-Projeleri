---

## 🇬🇧 ENGLISH 

# Hibernate Mode Application with Tiva C Series TM4C123G LaunchPad

This project demonstrates the use of **Hibernate Mode** on the **Tiva C Series TM4C123G LaunchPad** to reduce power consumption and implement wake-up functionality. Hibernate mode puts the microcontroller into a low-power state and brings it back to operation based on a defined condition (e.g., RTC time or an external GPIO wake-up signal).

---

## 📋 Project Summary

- **Hibernate Mode:**
  - The microcontroller enters a low-power state using **Hibernate Mode**.
  - **GPIO states** are preserved between sleep and wake states.

- **Wake-Up Conditions:**
  - **RTC Timer**: The Real-Time Clock (RTC) wakes the device after a defined duration.
  - **Wake-Up Pin (GPIO)**: An external signal on a GPIO pin can wake the device.

- **LED Indicator:**
  - LEDs on GPIO port F (red, blue, green) are used as status indicators.

---

## 🛠 Requirements

### Hardware:
- Tiva C Series TM4C123G LaunchPad  
- An external wake-up signal (e.g., button or sensor)

### Software:
- **Code Composer Studio (CCS)**  
- **TivaWare API Library**

---

## ⚙️ Hardware Connections

| Pin      | Function                           |
|----------|------------------------------------|
| GPIOF1   | Red LED (Status indicator)         |
| GPIOF2   | Blue LED (Status indicator)        |
| GPIOF3   | Green LED (Status indicator)       |
| GPIOF4   | Wake-up pin (with pull-up resistor) |

---

## 📄 Project Logic

1. **Activating Hibernate Mode:**
   - The **Hibernate Module** on the Tiva C is connected to the system clock and activated.
   - In Hibernate mode, GPIO pins retain their state (GPIORetention).

2. **RTC Trigger Configuration:**
   - RTC is configured for 5 seconds.
   - When the timer expires, the device wakes up.

3. **GPIO Wake-Up Configuration:**
   - **GPIOF4** (with pull-up resistor) is configured as an external wake-up pin.

4. **Entering Hibernate Mode:**
   - The system enters Hibernate mode using the `HibernateRequest()` function.
   - It only wakes up through the RTC or GPIO signal.

5. **LED Indication:**
   - Before entering Hibernate, an LED (e.g., blue) indicates the status.
   - After wake-up, LEDs show a different state.

---

## 📂 File Structure

- **main.c:** Main source file containing Hibernate activation, RTC configuration, and GPIO controls.

---

## 🚀 Setup and Execution

1. **Connect the Hardware:**
   - Make the necessary pin connections on the Tiva C LaunchPad.
   - Connect an external button or signal source to GPIOF4.

2. **Compile and Upload the Code:**
   - Open the project in Code Composer Studio.
   - Compile and upload it to the Tiva C.

3. **Run:**
   - Run the system and observe Hibernate mode activation.
   - Wake the system using RTC timeout or GPIOF4 input.

---






---

## 🇹🇷 TÜRKÇE 

---


# Tiva C Serisi TM4C123G LaunchPad Hibernate Modu Uygulaması

Bu proje, **Tiva C Serisi TM4C123G LaunchPad** üzerinde **Hibernate Modu** kullanarak güç tasarrufu sağlama ve uyandırma işlevlerini içermektedir. Hibernate modu, mikrodenetleyiciyi düşük güç tüketimi moduna geçirir ve belirli bir koşul oluştuğunda (örneğin, RTC zamanı veya uyandırma pini sinyali) sistemi tekrar çalışır duruma getirir.

---

## 📋 Proje Özeti

- **Hibernate Modu:**
  - Mikrodenetleyici, **Hibernate Modu** ile düşük güç tüketimi durumuna geçirilir.
  - **GPIO pinlerinin durumu**, modlar arasında korunur.
  
- **Uyandırma Koşulları:**
  - **RTC Zamanlayıcısı**: Gerçek zaman sayacı (RTC) belirli bir süre sonra cihazı uyandırır.
  - **Uyandırma Pini (GPIO)**: Bir GPIO pini kullanılarak dış bir tetikleme ile cihaz uyandırılır.

- **LED Göstergesi:**
  - GPIOF portu üzerindeki LED'ler (kırmızı, mavi, yeşil) durum göstergesi olarak kullanılır.

---

## 🛠 Gereksinimler

### Donanım:
- Tiva C Serisi TM4C123G LaunchPad
- Harici bir uyandırma sinyali (örneğin bir düğme veya sensör)

### Yazılım:
- **Code Composer Studio (CCS)**
- **TivaWare API Kütüphanesi**

---

## ⚙️ Donanım Bağlantıları

| Pin      | Fonksiyon                          |
|----------|------------------------------------|
| GPIOF1   | Kırmızı LED (Durum göstergesi)     |
| GPIOF2   | Mavi LED (Durum göstergesi)        |
| GPIOF3   | Yeşil LED (Durum göstergesi)       |
| GPIOF4   | Uyandırma pini (Pull-up dirençli)  |

---

## 📄 Proje Çalışma Mantığı

1. **Hibernate Modunun Aktifleştirilmesi:**
   - Tiva C üzerindeki **Hibernate Modülü**, sistem saatine bağlanır ve aktifleştirilir.
   - Hibernate modundayken GPIO pinleri korunur (GPIORetention).

2. **RTC Tetikleyici Ayarları:**
   - RTC (Real Time Clock) zamanlayıcısı 5 saniye olarak ayarlanır.
   - RTC zamanı dolduğunda cihaz uyandırılır.

3. **GPIO Uyandırma Ayarı:**
   - **GPIOF4 pini** (Pull-up dirençli), harici tetikleme ile uyandırma pini olarak ayarlanır.

4. **Hibernate Durumuna Geçiş:**
   - Sistem, `HibernateRequest()` fonksiyonu ile Hibernate moduna geçirilir.
   - Sistem yalnızca RTC veya GPIO sinyaliyle tekrar çalışır duruma gelir.

5. **LED Göstergesi:**
   - Hibernate öncesi LED'ler ile bir durum sinyali gösterilir (örneğin, mavi LED yanar).
   - Uyandırma sonrası, LED'ler farklı bir durumu belirtir.

---

## 📂 Dosya Yapısı

- **main.c:** Hibernate modunun aktivasyonu, RTC ayarları ve GPIO kontrollerini içeren ana kod.

---

## 🚀 Kurulum ve Çalıştırma

1. **Donanımı Bağla:**
   - Tiva C LaunchPad üzerinde gerekli pin bağlantılarını yap.
   - Harici bir düğme veya sinyal kaynağını GPIOF4 pinine bağla.

2. **Kodları Derle ve Yükle:**
   - Code Composer Studio'da proje dosyalarını aç.
   - Kodu derle ve Tiva C'ye yükle.

3. **Çalıştır:**
   - Sistemi çalıştır ve Hibernate modunun aktifleştirildiğini gözlemle.
   - RTC zamanı veya GPIOF4 pini ile sistemi uyandır.

---

