int main () {
    int vElSPsVh;
    char aRnXCN31Vw [50] [20];
    int gRMVkOSKZJP2;
    int TQAlaT4C;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%d", &vElSPsVh);
    for (gRMVkOSKZJP2 = 0; gRMVkOSKZJP2 < vElSPsVh; gRMVkOSKZJP2 = gRMVkOSKZJP2 + 1) {
        int kibPhpcTuBKg;
        int NhxPUmI0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        NhxPUmI0 = 0;
        scanf ("%s", aRnXCN31Vw[gRMVkOSKZJP2]);
        kibPhpcTuBKg = strlen (aRnXCN31Vw[gRMVkOSKZJP2]);
        if (aRnXCN31Vw[gRMVkOSKZJP2][0] == 95 || (65 <= aRnXCN31Vw[gRMVkOSKZJP2][0] && 90 >= aRnXCN31Vw[gRMVkOSKZJP2][0]) || (97 <= aRnXCN31Vw[gRMVkOSKZJP2][0] && aRnXCN31Vw[gRMVkOSKZJP2][0] <= 122)) {
            NhxPUmI0 = 1;
            for (TQAlaT4C = 1; kibPhpcTuBKg > TQAlaT4C; TQAlaT4C = TQAlaT4C +1) {
                if (aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == 95 || (aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] >= 65 && 90 >= aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C]) || (aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] >= 97 && aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] <= 122) || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '0' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '1' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '2' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '3' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '4' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '5' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '6' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '7' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '8' || aRnXCN31Vw[gRMVkOSKZJP2][TQAlaT4C] == '9') {
                    NhxPUmI0 = NhxPUmI0 +1;
                };
            }
            if (NhxPUmI0 == kibPhpcTuBKg) {
                printf ("yes\n");
            }
            else {
            };
        }
        else {
        };
    }
    return 0;
}

