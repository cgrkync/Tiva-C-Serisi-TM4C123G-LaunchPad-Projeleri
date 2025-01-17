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

