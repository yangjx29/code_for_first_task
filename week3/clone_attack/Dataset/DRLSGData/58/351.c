int f (char HsHdt4YPI7 [(239 - 158)]) {
    int Z57d8i;
    int Z8VqjbINvs;
    Z57d8i = (280 - 279);
    {
        Z8VqjbINvs = (83 - 83);
        while (HsHdt4YPI7[Z8VqjbINvs]) {
            {
                if ((609 - 609)) {
                    return (493 - 493);
                }
            }
            if ((!('_' != HsHdt4YPI7[Z8VqjbINvs])) || (HsHdt4YPI7[Z8VqjbINvs] <= 'Z' && 'A' <= HsHdt4YPI7[Z8VqjbINvs]) || ('a' <= HsHdt4YPI7[Z8VqjbINvs] && 'z' >= HsHdt4YPI7[Z8VqjbINvs]) || (HsHdt4YPI7[Z8VqjbINvs] >= '0' && HsHdt4YPI7[Z8VqjbINvs] <= '9' && Z8VqjbINvs > (168 - 168)))
                continue;
            else {
                Z57d8i = (816 - 816);
                break;
            }
            Z8VqjbINvs = Z8VqjbINvs +(886 - 885);
        }
    }
    if (Z57d8i == (896 - 895))
        return (735 - 734);
    else
        return (566 - 566);
}

int main () {
    int Z8VqjbINvs;
    char HsHdt4YPI7 [(314 - 233)];
    int r1TdQKxypAjD;
    cin >> r1TdQKxypAjD;
    {
        Z8VqjbINvs = (504 - 504);
        while (Z8VqjbINvs < r1TdQKxypAjD + (863 - 862)) {
            cin.getline (HsHdt4YPI7, (124 - 43), '\n');
            if (Z8VqjbINvs != (529 - 529))
                cout << f (HsHdt4YPI7) << endl;
            Z8VqjbINvs = Z8VqjbINvs +(33 - 32);
        }
    }
    return 0;
}

