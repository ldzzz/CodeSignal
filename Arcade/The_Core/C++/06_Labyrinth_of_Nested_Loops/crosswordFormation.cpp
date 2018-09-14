int crosswordFormation(std::vector<std::string> w) 
{
    std::vector<int> p = {0, 1, 2, 3};
    int ans = 0;
    do {
      const std::string
          &a = w[p[0]],
          &b = w[p[1]],
          &c = w[p[2]],
          &d = w[p[3]];
      int an = a.size();
      int bn = b.size();
      int cn = c.size();
      int dn = d.size();
      for (int i = 0; i < an; ++i)
       for (int j = 0; j < bn; ++j) if (a[i] == b[j])
        for (int k = i + 2; k < an; ++k)
         for (int l = 0; l < cn; ++l) if (a[k] == c[l])
          for (int m = j + 2; m < bn; ++m)
           for (int n = 0; n < dn; ++n) if (b[m] == d[n])
            if (l + m - j < cn && n + k - i < dn)
             if (c[l + m - j] == d[n + k - i])
              ++ans;
    } while (std::next_permutation(p.begin(), p.end()));
    return ans;
}

