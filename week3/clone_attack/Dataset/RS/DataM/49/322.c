void  DJlqufEdor (int YtDM3rINx, int LcVa08e, char ZjR4qiI []);
void  lwbGWvFx5KSe (char ZjR4qiI [], int qjGQ4Tavp, int YtDM3rINx);

int main () {
    int LcVa08e;
    int Dbxi8zlc;
    int YtDM3rINx;
    int DsA4OL3PWNkR;
    int qjGQ4Tavp;
    int FlqwKTFnS;
    int QF3LrYoNq;
    LcVa08e = 0;
    Dbxi8zlc = 0;
    char ZjR4qiI [501];
    ZjR4qiI[0] = getchar ();
    while (ZjR4qiI[LcVa08e] != '\n') {
        LcVa08e = LcVa08e +1;
        ZjR4qiI[LcVa08e] = getchar ();
    }
    for (YtDM3rINx = 2; YtDM3rINx < LcVa08e; YtDM3rINx++) {
        DJlqufEdor (YtDM3rINx, LcVa08e, ZjR4qiI);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    };
}

void  DJlqufEdor (int YtDM3rINx, int LcVa08e, char ZjR4qiI []) {
    int qjGQ4Tavp;
    int FlqwKTFnS;
    for (qjGQ4Tavp = 0; qjGQ4Tavp <= LcVa08e -YtDM3rINx; qjGQ4Tavp = qjGQ4Tavp + 1) {
        lwbGWvFx5KSe (ZjR4qiI, qjGQ4Tavp, YtDM3rINx);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    };
}

void  lwbGWvFx5KSe (char ZjR4qiI [], int qjGQ4Tavp, int YtDM3rINx) {
    int wxXH8ue, Ybga24cyuUp, LcVa08e;
    wxXH8ue = qjGQ4Tavp;
    Ybga24cyuUp = qjGQ4Tavp + YtDM3rINx -1;
    for (;; wxXH8ue = wxXH8ue + 1, Ybga24cyuUp--) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        if (ZjR4qiI[wxXH8ue] != ZjR4qiI[Ybga24cyuUp])
            break;
        else {
            if ((wxXH8ue == Ybga24cyuUp) || (wxXH8ue == Ybga24cyuUp -1)) {
                {
                    LcVa08e = qjGQ4Tavp;
                    while (LcVa08e <= qjGQ4Tavp + YtDM3rINx -1) {
                        printf ("%c", ZjR4qiI[LcVa08e]);
                        LcVa08e++;
                    };
                };
            };
        };
    };
}

