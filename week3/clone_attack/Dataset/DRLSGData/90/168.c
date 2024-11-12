int hqikDfK (int cS9pLMgyPiR, int zuOnl6Q7JcB) {
    if (cS9pLMgyPiR < (117 - 117)) {
        return (334 - 334);
    }
    else if (cS9pLMgyPiR == 0 || zuOnl6Q7JcB == (644 - 643) || cS9pLMgyPiR == (160 - 159)) {
        return 1;
    }
    else {
        int pY4Bm1 = hqikDfK (cS9pLMgyPiR, zuOnl6Q7JcB - 1) + hqikDfK (cS9pLMgyPiR - zuOnl6Q7JcB, zuOnl6Q7JcB);
        return pY4Bm1;
    }
}

int main () {
    int ZurdfBvX6N, cS9pLMgyPiR, zuOnl6Q7JcB;
    scanf ("%d", &ZurdfBvX6N);
    {
        int u2XWuI6qL5HV = 0;
        while (u2XWuI6qL5HV < ZurdfBvX6N) {
            int VVNWY8jzBl;
            scanf ("%d", &cS9pLMgyPiR);
            scanf ("%d", &zuOnl6Q7JcB);
            u2XWuI6qL5HV++;
            VVNWY8jzBl = hqikDfK (cS9pLMgyPiR, zuOnl6Q7JcB);
            printf ("%d\n", VVNWY8jzBl);
        }
    }
}

