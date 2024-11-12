int main () {
    int kfpXgwimCkTG, n1, J329weUKJ, JWhonN = 0, kMU3lKWx7N [26], a2 [26], h2t7WJp [26], dof1mh9JljO [26], UqgrectMQ0BG = 0;
    char Ve3jnKSUdWP [100], nKi5owZW [100], *p1, *LyZWUQmE;
    scanf ("%s %s", Ve3jnKSUdWP, nKi5owZW);
    LyZWUQmE = nKi5owZW;
    p1 = Ve3jnKSUdWP;
    n1 = strlen (Ve3jnKSUdWP);
    J329weUKJ = strlen (nKi5owZW);
    if (n1 != J329weUKJ) {
    }
    for (kfpXgwimCkTG = 0; kfpXgwimCkTG < 26; kfpXgwimCkTG = kfpXgwimCkTG + 1) {
        kMU3lKWx7N[kfpXgwimCkTG] = 0;
        a2[kfpXgwimCkTG] = 0;
        h2t7WJp[kfpXgwimCkTG] = 0;
        dof1mh9JljO[kfpXgwimCkTG] = 0;
    }
    if (n1 == J329weUKJ) {
        for (kfpXgwimCkTG = 0; kfpXgwimCkTG < n1; kfpXgwimCkTG = kfpXgwimCkTG + 1) {
            if (*(p1 + kfpXgwimCkTG) >= 'a' && *(p1 + kfpXgwimCkTG) <= 'z') {
                JWhonN = *(p1 + kfpXgwimCkTG) - 97;
                kMU3lKWx7N[JWhonN]++;
            }
            if (*(LyZWUQmE +kfpXgwimCkTG) >= 'a' && *(LyZWUQmE +kfpXgwimCkTG) <= 'z') {
                JWhonN = *(LyZWUQmE +kfpXgwimCkTG) - 97;
                a2[JWhonN]++;
            }
            if (*(p1 + kfpXgwimCkTG) >= 'A' && *(p1 + kfpXgwimCkTG) <= 'Z') {
                JWhonN = *(p1 + kfpXgwimCkTG) - 65;
                h2t7WJp[JWhonN]++;
            }
            if (*(LyZWUQmE +kfpXgwimCkTG) >= 'A' && *(LyZWUQmE +kfpXgwimCkTG) <= 'Z') {
                JWhonN = *(LyZWUQmE +kfpXgwimCkTG) - 65;
                dof1mh9JljO[JWhonN]++;
            }
        }
        for (kfpXgwimCkTG = 0; kfpXgwimCkTG < 26; kfpXgwimCkTG++) {
            if ((kMU3lKWx7N[kfpXgwimCkTG] != a2[kfpXgwimCkTG]) || (h2t7WJp[kfpXgwimCkTG] != dof1mh9JljO[kfpXgwimCkTG])) {
                UqgrectMQ0BG = 1;
                break;
            }
        }
        if (UqgrectMQ0BG == 0)
            ;
    }
    return 0;
}

