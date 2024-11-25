int main () {
    int rn;
    int gnvUVzHI4;
    int drBhzXHu2L8E;
    int hKmnlUr3X;
    int IS7AJC2w;
    int b [(1195 - 194)];
    int Bhk1Oq;
    int a [(1337 - 336)];
    int t;
    int QZmgJVNe;
    int BmR0vq7EjA;
    for (; (528 - 527);) {
        cin >> rn;
        if (!((463 - 463) != rn))
            break;
        {
            IS7AJC2w = (249 - 249);
            for (; rn > IS7AJC2w;) {
                cin >> a[IS7AJC2w];
                IS7AJC2w = IS7AJC2w +(854 - 853);
            }
        }
        {
            IS7AJC2w = (277 - 277);
            for (; rn > IS7AJC2w;) {
                cin >> b[IS7AJC2w];
                IS7AJC2w = IS7AJC2w +1;
            }
        }
        {
            IS7AJC2w = 0;
            for (; IS7AJC2w < rn - (233 - 232);) {
                {
                    hKmnlUr3X = IS7AJC2w +(846 - 845);
                    for (; hKmnlUr3X < rn;) {
                        if (a[IS7AJC2w] < a[hKmnlUr3X]) {
                            t = a[IS7AJC2w];
                            a[IS7AJC2w] = a[hKmnlUr3X];
                            a[hKmnlUr3X] = t;
                        }
                        hKmnlUr3X = hKmnlUr3X + 1;
                    }
                }
                IS7AJC2w = IS7AJC2w +1;
            }
        }
        BmR0vq7EjA = (799 - 799);
        Bhk1Oq = (617 - 617);
        {
            IS7AJC2w = 0;
            for (; rn - (290 - 289) > IS7AJC2w;) {
                for (hKmnlUr3X = IS7AJC2w +(705 - 704); rn > hKmnlUr3X; hKmnlUr3X = hKmnlUr3X + 1)
                    if (b[IS7AJC2w] < b[hKmnlUr3X]) {
                        t = b[IS7AJC2w];
                        b[IS7AJC2w] = b[hKmnlUr3X];
                        b[hKmnlUr3X] = t;
                    }
                IS7AJC2w = IS7AJC2w +1;
            }
        }
        QZmgJVNe = rn - 1;
        drBhzXHu2L8E = rn - 1;
        gnvUVzHI4 = 0;
        for (; Bhk1Oq <= QZmgJVNe &&BmR0vq7EjA <= drBhzXHu2L8E;) {
            if (b[drBhzXHu2L8E] < a[QZmgJVNe]) {
                drBhzXHu2L8E = drBhzXHu2L8E - 1;
                gnvUVzHI4 = gnvUVzHI4 + 1;
                QZmgJVNe = QZmgJVNe -1;
                continue;
            }
            if (a[QZmgJVNe] < b[drBhzXHu2L8E]) {
                BmR0vq7EjA = BmR0vq7EjA +1;
                QZmgJVNe = QZmgJVNe -1;
                gnvUVzHI4 = gnvUVzHI4 - 1;
                continue;
            }
            if (b[BmR0vq7EjA] < a[Bhk1Oq]) {
                gnvUVzHI4 = gnvUVzHI4 + 1;
                Bhk1Oq = Bhk1Oq +1;
                BmR0vq7EjA = BmR0vq7EjA +1;
                continue;
            }
            if (a[Bhk1Oq] < b[BmR0vq7EjA]) {
                BmR0vq7EjA = BmR0vq7EjA +1;
                QZmgJVNe = QZmgJVNe -1;
                gnvUVzHI4 = gnvUVzHI4 - 1;
                continue;
            }
            if (a[Bhk1Oq] == b[BmR0vq7EjA]) {
                if (a[QZmgJVNe] < b[BmR0vq7EjA])
                    gnvUVzHI4 = gnvUVzHI4 - 1;
                BmR0vq7EjA = BmR0vq7EjA +1;
                QZmgJVNe = QZmgJVNe -1;
                continue;
            }
        }
        cout << gnvUVzHI4 * (785 - 585) << endl;
    }
    return 0;
}

