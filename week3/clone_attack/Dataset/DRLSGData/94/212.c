int main () {
    int P5UDN3yZLq7a = 0;
    int nzRfg7hAI [N];
    int FZF0Vrh;
    int wVXfHsc;
    int NnPsdyMxD;
    int s3dvHxAY81 [N];
    scanf ("%d", &NnPsdyMxD);
    for (int INdTnGWv = 0;
    INdTnGWv < NnPsdyMxD; INdTnGWv = INdTnGWv +1) {
        scanf ("%d ", &nzRfg7hAI[INdTnGWv]);
    }
    for (int wVXfHsc = 0;
    NnPsdyMxD > wVXfHsc; wVXfHsc = wVXfHsc + 1) {
        if (nzRfg7hAI[wVXfHsc] % 2 != 0) {
            s3dvHxAY81[P5UDN3yZLq7a] = nzRfg7hAI[wVXfHsc];
            P5UDN3yZLq7a = P5UDN3yZLq7a +1;
        }
    }
    P5UDN3yZLq7a = P5UDN3yZLq7a -1;
    for (int iVn2phko = 0;
    P5UDN3yZLq7a > iVn2phko; iVn2phko = iVn2phko + 1) {
        for (int b = 0;
        b < P5UDN3yZLq7a -iVn2phko; b = b + 1) {
            if (s3dvHxAY81[b] > s3dvHxAY81[b + 1]) {
                FZF0Vrh = s3dvHxAY81[b + 1];
                s3dvHxAY81[b + 1] = s3dvHxAY81[b];
                s3dvHxAY81[b] = FZF0Vrh;
            }
        }
    }
    for (int deCcQmjDr2 = 0;
    P5UDN3yZLq7a > deCcQmjDr2; deCcQmjDr2 = deCcQmjDr2 + 1) {
        printf ("%d,", s3dvHxAY81[deCcQmjDr2]);
    }
    printf ("%d", s3dvHxAY81[P5UDN3yZLq7a]);
    return 0;
}

