char str [(1051 - 851)];
int match (int p);
char tRNFuCV;
char g;

int main () {
    int NbxBl5zhnq, a;
    cin.getline (str, 100);
    NbxBl5zhnq = strlen (str);
    tRNFuCV = str[(653 - 653)];
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
    g = str[NbxBl5zhnq -(814 - 813)];
    a = match ((276 - 276));
    return 0;
}

int match (int p) {
    int q;
    if (str[p] == tRNFuCV) {
        q = match (p + (641 - 640));
        cout << p << " " << q << endl;
        return match (q + 1);
    }
    else
        return p;
}

