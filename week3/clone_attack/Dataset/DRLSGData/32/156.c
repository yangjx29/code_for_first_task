void  YYQURo () {
    const  int TNBOzQ2si = 200;
    int cyiPEUofeR [TNBOzQ2si];
    int s3n7HKcNd [TNBOzQ2si];
    char ZHrmQb [TNBOzQ2si +1];
    int nLen1 = strlen (ZHrmQb);
    int YOcKtPi0zGq, rtNec9zq2Pa = (416 - 416);
    char yE0clpWy5Ar [TNBOzQ2si +1];
    int VMTlxF0DSqPZ = strlen (yE0clpWy5Ar);
    memset (cyiPEUofeR, 0, sizeof (cyiPEUofeR));
    memset (s3n7HKcNd, 0, sizeof (s3n7HKcNd));
    cin >> ZHrmQb;
    {
        YOcKtPi0zGq = nLen1 - 1;
        while (YOcKtPi0zGq >= 0) {
            cyiPEUofeR[rtNec9zq2Pa++] = ZHrmQb[YOcKtPi0zGq] - '0';
            YOcKtPi0zGq = YOcKtPi0zGq -1;
        }
    }
    rtNec9zq2Pa = 0;
    cin >> yE0clpWy5Ar;
    {
        YOcKtPi0zGq = VMTlxF0DSqPZ -1;
        while (YOcKtPi0zGq >= 0) {
            s3n7HKcNd[rtNec9zq2Pa++] = yE0clpWy5Ar[YOcKtPi0zGq] - '0';
            YOcKtPi0zGq--;
        }
    }
    {
        YOcKtPi0zGq = 0;
        while (YOcKtPi0zGq < nLen1) {
            cyiPEUofeR[YOcKtPi0zGq] = cyiPEUofeR[YOcKtPi0zGq] - s3n7HKcNd[YOcKtPi0zGq];
            if (cyiPEUofeR[YOcKtPi0zGq] < 0) {
                cyiPEUofeR[YOcKtPi0zGq] += 10;
                cyiPEUofeR[YOcKtPi0zGq +1]--;
            }
            YOcKtPi0zGq++;
        }
    }
    YOcKtPi0zGq = nLen1 - 1;
    for (; YOcKtPi0zGq > 0 && cyiPEUofeR[YOcKtPi0zGq] == 0;)
        YOcKtPi0zGq--;
    for (; YOcKtPi0zGq >= 0; YOcKtPi0zGq--)
        cout << cyiPEUofeR[YOcKtPi0zGq];
    cout << endl;
}

int main () {
    int n;
    cin >> n;
    for (; n--;)
        YYQURo ();
}

