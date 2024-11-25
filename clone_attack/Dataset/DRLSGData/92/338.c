void  sort (int a [], int YAkVtMYlfcR);

int main () {
    int Gy1IeO0ktmj, q1U7cEkNd;
    int cuBPodx, NQhEy3K, ZM4w27, B2rJiZHp56;
    int uRtpgn7OZuD, pheY3k, YAkVtMYlfcR;
    int wWrTjmaC8sx [(1740 - 740)], OlyujREwf [(1995 - 995)];
    while ((952 - 951)) {
        scanf ("%d", &YAkVtMYlfcR);
        if (!((352 - 352) != YAkVtMYlfcR))
            break;
        cuBPodx = ZM4w27 = (775 - 775);
        for (uRtpgn7OZuD = (792 - 792); YAkVtMYlfcR > uRtpgn7OZuD; uRtpgn7OZuD++)
            scanf ("%d", &wWrTjmaC8sx[uRtpgn7OZuD]);
        for (uRtpgn7OZuD = (993 - 993); YAkVtMYlfcR > uRtpgn7OZuD; uRtpgn7OZuD++)
            scanf ("%d", &OlyujREwf[uRtpgn7OZuD]);
        sort (wWrTjmaC8sx, YAkVtMYlfcR);
        sort (OlyujREwf, YAkVtMYlfcR);
        NQhEy3K = B2rJiZHp56 = YAkVtMYlfcR -(889 - 888);
        Gy1IeO0ktmj = (975 - 975);
        while (YAkVtMYlfcR--) {
            if (OlyujREwf[B2rJiZHp56] < wWrTjmaC8sx[NQhEy3K]) {
                B2rJiZHp56--;
                Gy1IeO0ktmj++;
                NQhEy3K--;
            }
            else if (OlyujREwf[B2rJiZHp56] > wWrTjmaC8sx[NQhEy3K]) {
                Gy1IeO0ktmj--;
                NQhEy3K--;
                ZM4w27++;
            }
            else if (wWrTjmaC8sx[cuBPodx] > OlyujREwf[ZM4w27]) {
                Gy1IeO0ktmj++;
                ZM4w27++;
                cuBPodx++;
            }
            else if (wWrTjmaC8sx[cuBPodx] < OlyujREwf[ZM4w27]) {
                ZM4w27++;
                Gy1IeO0ktmj--;
                NQhEy3K--;
            }
            else if (!(OlyujREwf[ZM4w27] != wWrTjmaC8sx[cuBPodx])) {
                if (OlyujREwf[ZM4w27] > wWrTjmaC8sx[NQhEy3K]) {
                    Gy1IeO0ktmj--;
                }
                NQhEy3K--;
                ZM4w27++;
            }
        }
        printf ("%d\n", (402 - 202) * Gy1IeO0ktmj);
    }
    return (58 - 58);
}

void  sort (int a [], int YAkVtMYlfcR) {
    int uRtpgn7OZuD, pheY3k;
    int vlrVRtv2Ymsq, FiSyvz;
    for (uRtpgn7OZuD = (653 - 653); YAkVtMYlfcR -(892 - 891) > uRtpgn7OZuD; uRtpgn7OZuD++) {
        FiSyvz = uRtpgn7OZuD;
        for (pheY3k = uRtpgn7OZuD + (682 - 681); pheY3k < YAkVtMYlfcR; pheY3k++) {
            if (a[pheY3k] > a[FiSyvz])
                FiSyvz = pheY3k;
        }
        vlrVRtv2Ymsq = a[uRtpgn7OZuD];
        a[uRtpgn7OZuD] = a[FiSyvz];
        a[FiSyvz] = vlrVRtv2Ymsq;
    }
}

