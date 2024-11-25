int main () {
    char ApkD4nRMzxjS [101];
    char kWyrCwV [101];
    gets (kWyrCwV);
    int kYxm1c5 = (int) strlen (kWyrCwV);
    for (int REwL9VBqNKi = 0;
    REwL9VBqNKi < kYxm1c5 - (193 - 192); REwL9VBqNKi = REwL9VBqNKi +1) {
        ApkD4nRMzxjS[REwL9VBqNKi] = kWyrCwV[REwL9VBqNKi] + kWyrCwV[REwL9VBqNKi +1];
    }
    ApkD4nRMzxjS[kYxm1c5 - 1] = kWyrCwV[kYxm1c5 - 1] + kWyrCwV[0];
    ApkD4nRMzxjS[kYxm1c5] = '\0';
    printf ("%s", ApkD4nRMzxjS);
    return 0;
}

