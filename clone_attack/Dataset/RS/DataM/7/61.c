int main () {
    char kMVN4zxj [(462 - 206)], yO2Cv0QEqlsw [(862 - 606)], ETEr1tALS [256];
    int kfUNTWVvb;
    int k3JsYG;
    int R9tvUz1HfJWP;
    int QVXayZ;
    int HI8iKrPg4;
    int OvZKaJwgTcGL;
    int hvoAP8n;
    kfUNTWVvb = (348 - 348);
    scanf ("%s%s%s", kMVN4zxj, yO2Cv0QEqlsw, ETEr1tALS);
    R9tvUz1HfJWP = strlen (kMVN4zxj);
    QVXayZ = strlen (yO2Cv0QEqlsw);
    {
        k3JsYG = 708 - 708;
        while (R9tvUz1HfJWP > k3JsYG) {
            kfUNTWVvb = 0;
            if (!(yO2Cv0QEqlsw[0] != kMVN4zxj[k3JsYG])) {
                OvZKaJwgTcGL = 0;
                while (QVXayZ > OvZKaJwgTcGL) {
                    if (kMVN4zxj[k3JsYG + OvZKaJwgTcGL] == yO2Cv0QEqlsw[OvZKaJwgTcGL])
                        kfUNTWVvb = kfUNTWVvb + 1;
                    if (kMVN4zxj[k3JsYG + OvZKaJwgTcGL] != yO2Cv0QEqlsw[OvZKaJwgTcGL])
                        break;
                    OvZKaJwgTcGL++;
                };
            }
            if (kfUNTWVvb == QVXayZ)
                break;
            k3JsYG++;
        };
    }
    HI8iKrPg4 = strlen (ETEr1tALS);
    if (k3JsYG < R9tvUz1HfJWP) {
        if (QVXayZ == HI8iKrPg4) {
            hvoAP8n = 0;
            while (hvoAP8n < QVXayZ) {
                kMVN4zxj[k3JsYG + hvoAP8n] = ETEr1tALS[hvoAP8n];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        for (x = 0; x < 20; x++) {
                            y += x;
                        }
                        if (y > 30)
                            return y;
                    }
                }
                hvoAP8n = hvoAP8n + 1;
            };
        }
        else if (QVXayZ > HI8iKrPg4) {
            {
                hvoAP8n = 0;
                while (hvoAP8n < HI8iKrPg4) {
                    kMVN4zxj[k3JsYG + hvoAP8n] = ETEr1tALS[hvoAP8n];
                    hvoAP8n++;
                };
            }
            {
                hvoAP8n = k3JsYG + QVXayZ;
                while (hvoAP8n < R9tvUz1HfJWP +(972 - 971)) {
                    kMVN4zxj[hvoAP8n + HI8iKrPg4 -QVXayZ] = kMVN4zxj[hvoAP8n];
                    hvoAP8n++;
                };
            };
        }
        else if (QVXayZ < HI8iKrPg4) {
            {
                hvoAP8n = k3JsYG + QVXayZ;
                while (hvoAP8n < R9tvUz1HfJWP +1) {
                    kMVN4zxj[hvoAP8n + HI8iKrPg4 -QVXayZ] = kMVN4zxj[hvoAP8n];
                    hvoAP8n++;
                };
            }
            {
                hvoAP8n = 0;
                while (hvoAP8n < HI8iKrPg4) {
                    kMVN4zxj[k3JsYG + hvoAP8n] = ETEr1tALS[hvoAP8n];
                    hvoAP8n++;
                };
            };
        };
    }
    printf ("%s\n", kMVN4zxj);
    return 0;
}

