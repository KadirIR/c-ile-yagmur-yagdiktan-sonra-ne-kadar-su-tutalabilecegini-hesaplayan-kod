# Yağmur suyunu biriktirme
Bu algoritma, bir dizi çubuğun yüksekliğini temsil eden ve yağmur sonrası su birikintisi oluşan bir senaryo için kullanılmaktadır. Amacı, bu çubuk yükseklikleri arasındaki su birikintisinin toplam kapasitesini hesaplamaktır.
Algoritma, her bir çubuğun su birikintisi kapasitesini hesaplamak için çubuğun sol ve sağ tarafındaki en yüksek çubuk yüksekliklerini bulur ve bu iki değerin minimumu ile çubuk yüksekliğinin farkını hesaplar. Son olarak, bu kapasitelerin toplamını hesaplayarak toplam su birikintisi kapasitesini döndürür.
Algoritma, su birikintisi hesaplamak gibi pratik bir problemi çözmek için kullanılan bir örnektir ve dinamik programlama prensiplerini kullanır. Ayrıca, bellek yönetimi için dinamik bellek tahsisi ve serbest bırakma kullanır.

# Kod Nasıl Kullanılır
Bu algoritma, bir senaryoda yağmur sonrası biriken su miktarını hesaplamak için kullanılır. Senaryo şöyle düşünülebilir: Bir bölgede bulunan çubukların yükseklikleri belirli bir dizi şeklinde verilmiştir ve bu bölgede yağmur yağmıştır. Yağmur sonrası oluşan su birikintisinin toplam kapasitesi, bu çubukların yükseklikleri arasındaki farklara bağlıdır.
Algoritma, bu farkları hesaplamak için dinamik programlama prensiplerini kullanarak sol ve sağ taraftaki en yüksek çubuk yüksekliklerini bulur. Daha sonra, her bir çubuk için bu iki değerin minimumu ile çubuk yüksekliği arasındaki farkı hesaplar. Bu kapasitelerin toplamı, yağmur sonrası biriken su miktarını verir.
Algoritmayı kullanmak için, senaryodaki çubuk yüksekliklerinin bir dizi olarak belirlenmesi gereklidir. Bu dizi, algoritmanın parametrelerinden biridir. Algoritma, çubuk yükseklikleri arasındaki farkları hesaplar ve yağmur sonrası biriken su miktarını hesaplar. Sonuç, printf() fonksiyonu ile ekrana yazdırılır.
Özetle, bu algoritma, bir senaryodaki çubuk yüksekliklerinin arasındaki farkları hesaplayarak yağmur sonrası biriken su miktarını hesaplamak için kullanılır.

# Kodun Çalışma Şekli
Bu kod, bir fonksiyon ve bir ana programdan oluşur. Ana programda, önceden belirlenmiş bir çubuk yükseklikleri dizisi oluşturulur ve bu dizi fonksiyona gönderilir. Fonksiyon, bu dizi üzerinde hesaplama yapar ve yağmur sonrası biriken su miktarını hesaplar. Sonuç ana programda ekrana yazdırılır.
Fonksiyon, dinamik programlama prensiplerine dayanarak sol ve sağ taraftaki en yüksek çubuk yüksekliklerini bulur. Daha sonra, her bir çubuk için bu iki değerin minimumu ile çubuk yüksekliği arasındaki farkı hesaplar. Bu kapasitelerin toplamı, yağmur sonrası biriken su miktarını verir.
Kodun çalışma mantığı şöyle özetlenebilir:
Ana programda, çubuk yüksekliklerinin bir dizi olarak belirlenmesi ve fonksiyona gönderilmesi sağlanır.
Fonksiyon, sol ve sağ taraftaki en yüksek çubuk yüksekliklerini hesaplamak için iki adet geçici dizi oluşturur.
Sol taraftaki maksimum yükseklikleri hesaplamak için, çubuk yüksekliklerinin ilk elemanından başlanarak bir döngü oluşturulur. Her bir eleman için, önceki eleman ile karşılaştırılır ve daha büyük olanı geçici diziye atanır.
Sağ taraftaki maksimum yükseklikleri hesaplamak için, çubuk yüksekliklerinin son elemanından başlanarak geriye doğru bir döngü oluşturulur. Her bir eleman için, sonraki eleman ile karşılaştırılır ve daha büyük olanı geçici diziye atanır.
Çubuk yüksekliklerinin su kapasitesini hesaplamak için, çubuk yüksekliklerinin ilk ve son elemanları dışındaki her eleman için geçici dizilerdeki sol ve sağ maksimum yükseklik değerlerinden minimumu bulunur. Bu minimum değer, çubuk yüksekliğinden çıkarılarak su kapasitesi hesaplanır.
Elde edilen su kapasiteleri toplanarak, yağmur sonrası biriken su miktarı hesaplanır ve ana programa geri döndürülür.
Ana programda, hesaplanan yağmur sonrası biriken su miktarı printf() fonksiyonu ile ekrana yazdırılır.
Bu şekilde, kodun çalışması sonucunda yağmur sonrası biriken su miktarı hesaplanır ve kullanıcıya gösterilir.



