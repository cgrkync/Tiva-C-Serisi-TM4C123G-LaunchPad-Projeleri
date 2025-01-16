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

