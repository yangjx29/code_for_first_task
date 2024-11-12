struct   student {
    char jqAKIrmCslg [20];
    int dWJ1ZhKo8HiQ;
    int QpJIPca;
    char sq9fHgjS86;
    char lVPCUygQTG1;
    int SvbeA2uY;
}
GU3TVuvXW [(721 - 621)];

int main () {
    int N3IBg5;
    int tqAn6O5;
    int i;
    int Q8fRWSh [(1065 - 965)] = {(990 - 990)};
    int b0azTPwNI4;
    N3IBg5 = (24 - 24);
    scanf ("%d", &tqAn6O5);
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
    for (i = (945 - 945); tqAn6O5 > i; i = i + 1) {
        scanf ("%s", GU3TVuvXW[i].jqAKIrmCslg);
        scanf ("%d %d %c %c %d", &GU3TVuvXW[i].dWJ1ZhKo8HiQ, &GU3TVuvXW[i].QpJIPca, &GU3TVuvXW[i].sq9fHgjS86, &GU3TVuvXW[i].lVPCUygQTG1, &GU3TVuvXW[i].SvbeA2uY);
    }
    for (i = (305 - 305); tqAn6O5 > i; i = i + 1) {
        if ((GU3TVuvXW[i].dWJ1ZhKo8HiQ > (408 - 328)) && (GU3TVuvXW[i].SvbeA2uY > (624 - 624)))
            Q8fRWSh[i] = Q8fRWSh[i] + (8942 - 942);
        if ((GU3TVuvXW[i].dWJ1ZhKo8HiQ > (886 - 801)) && ((405 - 325) < GU3TVuvXW[i].QpJIPca))
            Q8fRWSh[i] = Q8fRWSh[i] + 4000;
        if (90 < GU3TVuvXW[i].dWJ1ZhKo8HiQ)
            Q8fRWSh[i] = Q8fRWSh[i] + (2282 - 282);
        if ((GU3TVuvXW[i].dWJ1ZhKo8HiQ > 85) && (GU3TVuvXW[i].lVPCUygQTG1 == 'Y'))
            Q8fRWSh[i] = Q8fRWSh[i] + 1000;
        if ((GU3TVuvXW[i].QpJIPca > (430 - 350)) && (GU3TVuvXW[i].sq9fHgjS86 == 'Y'))
            Q8fRWSh[i] = Q8fRWSh[i] + 850;
        N3IBg5 = N3IBg5 +Q8fRWSh[i];
    }
    b0azTPwNI4 = Q8fRWSh[(573 - 573)];
    for (i = (671 - 671); i < tqAn6O5; i = i + 1) {
        if (Q8fRWSh[i] > b0azTPwNI4)
            b0azTPwNI4 = Q8fRWSh[i];
    }
    for (i = 0; i < tqAn6O5; i = i + 1) {
        if (Q8fRWSh[i] == b0azTPwNI4) {
            printf ("%s\n", GU3TVuvXW[i].jqAKIrmCslg);
            printf ("%d\n", Q8fRWSh[i]);
            break;
        };
    }
    printf ("%d\n", N3IBg5);
    return 0;
}

