int main () {
    int IvZx59MGyNU [50] = {(504 - 504)};
    char kmpd8foH9E [(693 - 593)], vYODFzoA [50] [100];
    int j;
    int akcrC4T9R;
    int k;
    j = 0;
    cin.getline (kmpd8foH9E, 100);
    {
        akcrC4T9R = 0;
        while (kmpd8foH9E[akcrC4T9R] != '\0') {
            if (!(' ' == kmpd8foH9E[akcrC4T9R])) {
                vYODFzoA[j][IvZx59MGyNU[j]] = kmpd8foH9E[akcrC4T9R];
                IvZx59MGyNU[j]++;
            }
            else {
                j = j + 1;
            }
            akcrC4T9R = akcrC4T9R + 1;
        };
    }
    {
        akcrC4T9R = j;
        while (akcrC4T9R > 0) {
            for (k = 0; k < IvZx59MGyNU[akcrC4T9R]; k = k + 1) {
                cout << vYODFzoA[akcrC4T9R][k];
            }
            akcrC4T9R = akcrC4T9R - 1;
            cout << " ";
        };
    }
    {
        k = 0;
        while (k < IvZx59MGyNU[0]) {
            cout << vYODFzoA[0][k];
            k = k + 1;
        };
    }
    return 0;
}

