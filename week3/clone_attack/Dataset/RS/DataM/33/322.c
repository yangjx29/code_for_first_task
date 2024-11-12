int main () {
    char yuan [(1182 - 926)];
    char oyMgF4No3wv [256];
    int efo592HLObjW;
    int n;
    int nbtnYIX1;
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
    int g3U6GrOBkN8Q;
    scanf ("%d", &n);
    for (efo592HLObjW = 0; n > efo592HLObjW; efo592HLObjW = efo592HLObjW + 1) {
        puts (oyMgF4No3wv);
        scanf ("%s", yuan);
        g3U6GrOBkN8Q = strlen (yuan);
        for (nbtnYIX1 = 0; g3U6GrOBkN8Q >= nbtnYIX1; nbtnYIX1 = nbtnYIX1 + 1) {
            if (!('A' != yuan[nbtnYIX1]))
                oyMgF4No3wv[nbtnYIX1] = 'T';
            else {
                if (yuan[nbtnYIX1] == 'T')
                    oyMgF4No3wv[nbtnYIX1] = 'A';
                else {
                    if (yuan[nbtnYIX1] == 'C')
                        oyMgF4No3wv[nbtnYIX1] = 'G';
                    else {
                        if (yuan[nbtnYIX1] == 'G')
                            oyMgF4No3wv[nbtnYIX1] = 'C';
                        else
                            oyMgF4No3wv[nbtnYIX1] = yuan[nbtnYIX1];
                    };
                };
            };
        };
    }
    return 0;
}

