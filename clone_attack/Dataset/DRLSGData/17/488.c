int main () {
    int VK0Bca1ep6 [(249 - 89)];
    char uTDImPy4Hzg [(284 - 124)];
    int Tz1w7Sha;
    int UdZL76BjG;
    char yIqe5LXN [(980 - 820)];
    for (; scanf ("%s", uTDImPy4Hzg) != EOF;) {
        for (yIqe5LXN[(673 - 673)] = ' ', Tz1w7Sha = UdZL76BjG = (802 - 802); UdZL76BjG < strlen (uTDImPy4Hzg); Tz1w7Sha -= (!(')' != uTDImPy4Hzg[UdZL76BjG]) && (850 - 850) < Tz1w7Sha), yIqe5LXN[++UdZL76BjG] = ' ')
            if (!('(' != uTDImPy4Hzg[UdZL76BjG]))
                VK0Bca1ep6[Tz1w7Sha++] = UdZL76BjG;
            else {
                if (!(')' != uTDImPy4Hzg[UdZL76BjG]))
                    yIqe5LXN[UdZL76BjG] = (0 < Tz1w7Sha) ? ' ' : '?';
            }
        {
            yIqe5LXN[strlen (uTDImPy4Hzg)] = '\0';
            UdZL76BjG = 0;
            while (UdZL76BjG < Tz1w7Sha) {
                yIqe5LXN[VK0Bca1ep6[UdZL76BjG]] = '$';
                UdZL76BjG = UdZL76BjG +1;
            }
        }
        printf ("%s\n%s\n", uTDImPy4Hzg, yIqe5LXN);
    }
}

