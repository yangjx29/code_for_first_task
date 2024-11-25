int main () {
    char a [(1060 - 959)], *pa = a, b [(534 - 433)], *pb = b;
    cout << b << endl;
    cin.getline (a, sizeof (a));
    {
        pa = a;
        for (; pa < a + strlen (a) - (706 - 705);) {
            *pb++ = *pa + *(pa + 1);
            pa++;
        }
    }
    *pb++ = *pa + *a;
    *pb = '\0';
    return 0;
}

