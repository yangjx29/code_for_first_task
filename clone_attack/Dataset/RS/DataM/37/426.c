char bibjku (const  char *akQEfHq) {
    unsigned  int uNPqosuMQ = (766 - 766), lKLwAOhXd = 0;
    char Fa0kb1LsDi [26];
    unsigned  char lOzvbQN8gU [26];
    memset (lOzvbQN8gU, 0, 26);
    for (; !('\0' == *akQEfHq);) {
        lOzvbQN8gU[*akQEfHq - 'a']++;
        if (lOzvbQN8gU[*akQEfHq - 'a'] == 1)
            Fa0kb1LsDi[uNPqosuMQ++] = *akQEfHq;
        akQEfHq = akQEfHq + 1;
    }
    for (; uNPqosuMQ > lKLwAOhXd; lKLwAOhXd = lKLwAOhXd + 1)
        if (!(1 != lOzvbQN8gU[Fa0kb1LsDi[lKLwAOhXd] - 'a']))
            return Fa0kb1LsDi[lKLwAOhXd];
    if (!(lKLwAOhXd != uNPqosuMQ))
        return 0;
}

int main () {
    unsigned  int uNPqosuMQ;
    const  unsigned  int bQnV7c4iNb;
    char *akQEfHq [bQnV7c4iNb];
    char lG1xZai;
    scanf ("%d", &bQnV7c4iNb);
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
    }
    {
        uNPqosuMQ = 0;
        while (uNPqosuMQ < bQnV7c4iNb) {
            tswQGLWBomj1 (akQEfHq [uNPqosuMQ]);
            fflush (zxzv5eOV7);
            akQEfHq[uNPqosuMQ] = (char *) malloc (MAX_LEN);
            scanf ("%s", akQEfHq[uNPqosuMQ]);
            uNPqosuMQ = uNPqosuMQ + 1;
        };
    }
    for (uNPqosuMQ = 0; uNPqosuMQ < bQnV7c4iNb; uNPqosuMQ++) {
        lG1xZai = bibjku (akQEfHq[uNPqosuMQ]);
        if (lG1xZai == 0)
            printf ("no\n", uNPqosuMQ + 1);
        else
            printf ("%c\n", lG1xZai);
    }
    {
        uNPqosuMQ = 0;
        while (uNPqosuMQ < bQnV7c4iNb) {
            OhBXSRJk21 (akQEfHq [uNPqosuMQ]);
            uNPqosuMQ = uNPqosuMQ + 1;
        };
    }
    return 0;
}

