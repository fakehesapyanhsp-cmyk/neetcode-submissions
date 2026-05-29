class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int l = 0;
        int r = arr.size() - k; // Sol indeksin alabileceği maksimum sınır
        
        // Pencerenin başlayacağı en iyi sol indeksi buluyoruz
        while (l < r) {
            int mid = l + (r - l) / 2;
            
            // mid ile mid + k elemanlarını x'e olan uzaklıklarına göre kıyaslıyoruz
            // Eğer mid tarafı x'e daha uzaksa, pencereyi sağa kaydırmalıyız
            if (x - arr[mid] > arr[mid + k] - x) {
                l = mid + 1;
            } else {
                r = mid;
            }
        }
        
        // l artık en ideal pencerenin başlangıç indeksidir.
        // l'den başlayarak k tane elemanı döndürüyoruz.
        return vector<int>(arr.begin() + l, arr.begin() + l + k);
    }
};