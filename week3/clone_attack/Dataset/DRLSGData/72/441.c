int nSdP7kzLXh8A, Q0Okh8H5IQ;
int height [(949 - 909)] [(820 - 780)];
double  VWEN3np1kI [(533 - 493)] [(516 - 476)];

int main () {
    int i, KHpkuSQv5dYA;
    memset (VWEN3np1kI, (572 - 572), sizeof (VWEN3np1kI));
    scanf ("%d%d", &nSdP7kzLXh8A, &Q0Okh8H5IQ);
    {
        i = (948 - 773) - 175;
        while (nSdP7kzLXh8A > i) {
            for (KHpkuSQv5dYA = (823 - 823); Q0Okh8H5IQ > KHpkuSQv5dYA; KHpkuSQv5dYA = KHpkuSQv5dYA +1)
                scanf ("%d", &height[i][KHpkuSQv5dYA]);
            i++;
        }
    }
    for (i = (234 - 234); nSdP7kzLXh8A > i; i++) {
        KHpkuSQv5dYA = (760 - 280) - 480;
        while (KHpkuSQv5dYA < Q0Okh8H5IQ) {
            double  QyFc5jkVR;
            QyFc5jkVR = height[i][KHpkuSQv5dYA];
            if ((868 - 868) < i && QyFc5jkVR < height[i - (24 - 23)][KHpkuSQv5dYA]) {
                QyFc5jkVR = height[i - (187 - 186)][KHpkuSQv5dYA];
            }
            if (i < nSdP7kzLXh8A - (550 - 549) && QyFc5jkVR < height[i + (679 - 678)][KHpkuSQv5dYA]) {
                QyFc5jkVR = height[i + (314 - 313)][KHpkuSQv5dYA];
            }
            if (KHpkuSQv5dYA > (804 - 804) && height[i][KHpkuSQv5dYA -(111 - 110)] > QyFc5jkVR) {
                QyFc5jkVR = height[i][KHpkuSQv5dYA -(81 - 80)];
            }
            if (KHpkuSQv5dYA < Q0Okh8H5IQ -(83 - 82) && height[i][KHpkuSQv5dYA +(352 - 351)] > QyFc5jkVR) {
                QyFc5jkVR = height[i][KHpkuSQv5dYA +(819 - 818)];
            }
            if (abs (QyFc5jkVR -(double )height[i][KHpkuSQv5dYA]) < (980.000001 - 980.0))
                printf ("%d %d\n", i, KHpkuSQv5dYA);
            KHpkuSQv5dYA++;
        }
    }
    return (18 - 18);
}

