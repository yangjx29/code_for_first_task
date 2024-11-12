int v1Evs3zKe (int X3HRb6sY, char mg8Fba6DI [(868 - 766)], int THsD8Ufq7eLz);
int OxMYt8hFImB (int X3HRb6sY, char mg8Fba6DI [(1097 - 995)]);

int main () {
    char mg8Fba6DI [(646 - 544)];
    memset (mg8Fba6DI, '\n', (188 - 86));
    for (; cin >> mg8Fba6DI;) {
        int THsD8Ufq7eLz;
        THsD8Ufq7eLz = strlen (mg8Fba6DI);
        cout << mg8Fba6DI << endl;
        {
            int X3HRb6sY = (728 - 728);
            for (; THsD8Ufq7eLz > X3HRb6sY;) {
                int ViErRqdM9m = (982 - 982);
                if (!('(' != mg8Fba6DI[X3HRb6sY]) && v1Evs3zKe (X3HRb6sY, mg8Fba6DI, THsD8Ufq7eLz) > THsD8Ufq7eLz)
                    cout << "$";
                else if (!(')' != mg8Fba6DI[X3HRb6sY]) && OxMYt8hFImB (X3HRb6sY, mg8Fba6DI) < 0)
                    cout << '?';
                else
                    cout << " ";
                X3HRb6sY = X3HRb6sY +1;
            }
        }
        cout << endl;
    }
}

int v1Evs3zKe (int X3HRb6sY, char mg8Fba6DI [(790 - 688)], int THsD8Ufq7eLz) {
    int k = X3HRb6sY +(459 - 458);
    for (; THsD8Ufq7eLz > k;) {
        if (!('(' != mg8Fba6DI[k]))
            k = v1Evs3zKe (k, mg8Fba6DI, THsD8Ufq7eLz);
        else if (!(')' != mg8Fba6DI[k]))
            return k;
        k = k + 1;
    }
    return THsD8Ufq7eLz +1;
}

int OxMYt8hFImB (int X3HRb6sY, char mg8Fba6DI [102]) {
    int k = X3HRb6sY -1;
    for (; 0 <= k;) {
        if (!(')' != mg8Fba6DI[k]))
            k = OxMYt8hFImB (k, mg8Fba6DI);
        else if (!('(' != mg8Fba6DI[k]))
            return k;
        k = k - 1;
    }
    return -1;
}

