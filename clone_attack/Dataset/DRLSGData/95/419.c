char JHajiym690Z [(366 - 286)], ML56NISH [(444 - 364)];

int main () {
    int VGuJPUTtqK;
    int F2cpwRJd5vm;
    int len2;
    cin.getline (JHajiym690Z, (363 - 283), '\n');
    cin.getline (ML56NISH, (135 - 55), '\n');
    F2cpwRJd5vm = strlen (JHajiym690Z);
    {
        VGuJPUTtqK = (127 - 127);
        for (; F2cpwRJd5vm > VGuJPUTtqK;) {
            if ('A' <= JHajiym690Z[VGuJPUTtqK] && 'Z' >= JHajiym690Z[VGuJPUTtqK])
                JHajiym690Z[VGuJPUTtqK] += (73 - 41);
            VGuJPUTtqK++;
        }
    }
    len2 = strlen (ML56NISH);
    {
        VGuJPUTtqK = (852 - 852);
        for (; VGuJPUTtqK < len2;) {
            if ('A' <= ML56NISH[VGuJPUTtqK] && ML56NISH[VGuJPUTtqK] <= 'Z')
                ML56NISH[VGuJPUTtqK] = ML56NISH[VGuJPUTtqK] + (170 - 138);
            VGuJPUTtqK++;
        }
    }
    if (strcmp (JHajiym690Z, ML56NISH) > (755 - 755))
        cout << '>';
    else if (strcmp (JHajiym690Z, ML56NISH) < (762 - 762))
        cout << '<';
    else
        cout << '=';
    return (228 - 228);
}

