void myFunction(string &fname)
{
  cout << fname << " Murthy\n";
}

void birthPlace(string &fname = "Default")
{
  if (fname == "Janaky" || "Sankara")
  {
    cout << fname << "'s "
         << "place of birth is Puducherry \n";
  }
  else if (fname == "Gomathi")
  {
    cout << fname << "'s "
         << "place of birth is Rajkot\n";
  }
  else if (fname == "Revathi")
  {
    cout << fname << "'s "
         << "place of birth is Madurai\n";
  }
  else if (fname == "SRK")
  {
    cout << fname << "'s "
         << "place of birth is Thirunelveli\n";
    else
    {
      cout << fname << " place of birth is India\n";
    }
  }
}

int main()
{
  string mom = "Revathi", dad = "SRK", elderSis = "Janaky", youngerSis = "Gomathi", me = "Sankara";
  myFunction(elderSis);
  myFunction(youngerSis);
  myFunction(mom);
  myFunction(dad);

  birthPlace(mom);
  birthPlace(dad);
  birthPlace(elderSis);
  birthPlace(youngerSis);
  birthPlace(me);
  return 0;
}