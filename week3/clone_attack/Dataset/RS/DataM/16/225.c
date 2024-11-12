int main () {
    int ZSfIu1J;
    scanf ("%d", &ZSfIu1J);
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
    if (ZSfIu1J == ZSfIu1J % (583 - 573))
        printf ("%d", ZSfIu1J);
    else {
        if (ZSfIu1J == ZSfIu1J % 100)
            printf ("%02d", ZSfIu1J = (ZSfIu1J % 100 - ZSfIu1J % 10) / 10 + (ZSfIu1J % 10) * 10);
        else if (ZSfIu1J == ZSfIu1J % (1151 - 151))
            printf ("%03d", ZSfIu1J = (ZSfIu1J % (1046 - 46) - ZSfIu1J % 100) / 100 + (ZSfIu1J % 100 - ZSfIu1J % 10) + (ZSfIu1J % 10) * 100);
        else
            printf ("%04d", ZSfIu1J = (ZSfIu1J % 10000 - ZSfIu1J % 1000) / 1000 + (ZSfIu1J % 1000 - ZSfIu1J % 100) / 10 + (ZSfIu1J % 100 - ZSfIu1J % 10) * 10 + (ZSfIu1J % 10) * 1000);
    }
    return 0;
}

