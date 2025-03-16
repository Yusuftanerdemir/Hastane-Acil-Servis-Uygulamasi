# Hastane Acil Servis Uygulamasi
 
## Proje Açıklaması
Bu proje, acil servislerde hasta kayıtlarını yönetmek, öncelik sırasına göre sıralamak ve reçete numarası atamak amacıyla geliştirilmiş bir CLI (Komut Satırı Arayüzü) tabanlı hasta takip sistemidir. 

## Özellikler
- Hasta bilgilerini kaydetme (ID, Ad, Doğum Tarihi, Şikayet, Tansiyon, Kalp Ritmi vb.)
- Hastaları öncelik durumuna göre sıralama
- Hasta listesini görüntüleme
- Otomatik reçete numarası üretme
- Komut satırı üzerinden kullanım

## Kullanım
Program çalıştırıldığında aşağıdaki menü görüntülenecektir:
```
1. Hasta Ekle
2. Hasta Listesini Göster
3. Çıkış
Seçiminiz: 
```
Kullanıcı menüden uygun seçeneği girerek işlemlerini gerçekleştirebilir.

## Örnek Kullanım
Hasta ekleme işlemi:
```
Hasta ID: 123
Hasta Adı: Ali Veli
Doğum Tarihi: 12/03/1985
Hastanın Şikayeti: Baş ağrısı
Öncelik (1-Kritik, 2-Acil, 3-Normal): 2
Küçük Tansiyon: 80
Büyük Tansiyon: 120
Kalp Ritmi: 75
```

Hasta listesini görüntüleme işlemi:
```
Hasta Listesi (Öncelik sırasına göre):
ID: 123, Ad: Ali Veli, Doğum Tarihi: 12/03/1985, Şikayet: Baş ağrısı, Öncelik: 2, Küçük Tansiyon: 80, Büyük Tansiyon: 120, Kalp Ritmi: 75, Reçete: RX-3456
```

