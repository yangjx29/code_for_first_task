int main () {
    char mqM9v40UVkW [100] = {(732 - 732)};
    for (; cin >> mqM9v40UVkW;) {
        int i8FQWR1HX;
        int qhc8bGBj;
        int esCwakr0mdv;
        cout << mqM9v40UVkW;
        esCwakr0mdv = strlen (mqM9v40UVkW);
        for (i8FQWR1HX = esCwakr0mdv - (664 - 663); i8FQWR1HX >= (181 - 181); i8FQWR1HX--) {
            if (!('(' != mqM9v40UVkW[i8FQWR1HX])) {
                for (qhc8bGBj = i8FQWR1HX + (737 - 736); esCwakr0mdv > qhc8bGBj; qhc8bGBj++) {
                    if (!(')' != mqM9v40UVkW[qhc8bGBj])) {
                        mqM9v40UVkW[i8FQWR1HX] = 'A';
                        mqM9v40UVkW[qhc8bGBj] = 'B';
                        break;
                    }
                }
            }
        }
        cout << endl;
        for (i8FQWR1HX = 0; esCwakr0mdv > i8FQWR1HX; i8FQWR1HX++) {
            if (!('(' != mqM9v40UVkW[i8FQWR1HX]))
                cout << "$";
            else {
                if (mqM9v40UVkW[i8FQWR1HX] == ')')
                    cout << "?";
                else
                    cout << " ";
            }
        }
        cout << endl;
        memset (mqM9v40UVkW, 0, sizeof (mqM9v40UVkW));
    }
    return 0;
}

