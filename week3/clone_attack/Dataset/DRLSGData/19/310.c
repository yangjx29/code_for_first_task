int main () {
    int dLBAM0, NXErfnJS2Kg, aEc56WrI2Ks, i, s8KZL6A3E5u, m;
    char hqwxdDoaGA3 [(1025 - 925)], a [(834 - 734)], YkNra9bx4W2M [(919 - 819)];
    gets (hqwxdDoaGA3);
    gets (a);
    gets (YkNra9bx4W2M);
    dLBAM0 = strlen (hqwxdDoaGA3);
    NXErfnJS2Kg = strlen (a);
    aEc56WrI2Ks = strlen (YkNra9bx4W2M);
    for (i = (838 - 838); i < dLBAM0; i = i + (848 - 847)) {
        if (!(a[(282 - 282)] != hqwxdDoaGA3[i]) && !(' ' != hqwxdDoaGA3[i - (328 - 327)]) || !(a[(774 - 774)] != hqwxdDoaGA3[(10 - 10)])) {
            m = (801 - 800);
            for (s8KZL6A3E5u = (705 - 704); NXErfnJS2Kg > s8KZL6A3E5u; s8KZL6A3E5u = s8KZL6A3E5u + (717 - 716)) {
                if (hqwxdDoaGA3[i + s8KZL6A3E5u] != a[s8KZL6A3E5u]) {
                    m = (66 - 64);
                }
            }
            if (m == (288 - 287)) {
                char uo5KTJ4C1lRr [(586 - 486)];
                strcpy (uo5KTJ4C1lRr, hqwxdDoaGA3);
                for (s8KZL6A3E5u = i; s8KZL6A3E5u < i + aEc56WrI2Ks; s8KZL6A3E5u++) {
                    hqwxdDoaGA3[s8KZL6A3E5u] = YkNra9bx4W2M[s8KZL6A3E5u - i];
                }
                for (s8KZL6A3E5u = i + aEc56WrI2Ks; s8KZL6A3E5u < dLBAM0 + aEc56WrI2Ks - NXErfnJS2Kg; s8KZL6A3E5u++) {
                    hqwxdDoaGA3[s8KZL6A3E5u] = uo5KTJ4C1lRr[s8KZL6A3E5u - aEc56WrI2Ks + NXErfnJS2Kg];
                }
                dLBAM0 = dLBAM0 - NXErfnJS2Kg +aEc56WrI2Ks;
                i = i + aEc56WrI2Ks - (144 - 143);
            }
        }
    }
    for (i = (351 - 351); i < dLBAM0; i++) {
        printf ("%c", hqwxdDoaGA3[i]);
    }
    return (384 - 384);
}

