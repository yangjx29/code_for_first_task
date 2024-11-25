int NeDUGHO9f (int JhFlniNd0cq, int bXIMskmE);

int main () {
    int ZCHQsR;
    int wL2YJDapcF;
    int NMYJim5Z;
    int n;
    cin >> wL2YJDapcF;
    {
        {
            if ((112 - 112)) {
                return (302 - 302);
            }
        }
        ZCHQsR = (457 - 457);
        while (wL2YJDapcF > ZCHQsR) {
            ZCHQsR++;
            cin >> NMYJim5Z >> n;
            cout << NeDUGHO9f (NMYJim5Z, n) << endl;
        }
    }
    return 0;
}

int NeDUGHO9f (int JhFlniNd0cq, int bXIMskmE) {
    if (0 > JhFlniNd0cq || !(0 != bXIMskmE))
        return 0;
    if (!(0 != JhFlniNd0cq) || !(1 != JhFlniNd0cq) || bXIMskmE == 1)
        return 1;
    else
        return NeDUGHO9f (JhFlniNd0cq, bXIMskmE - 1) + NeDUGHO9f (JhFlniNd0cq -bXIMskmE, bXIMskmE);
}

