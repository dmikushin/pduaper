﻿namespace RMC_DF
{
  using RMC_DF.Entities;

  public class DfFacade
  {
    public Rdf GetRdf(string v)
    {
      RdfManager rdfManager = new RdfManager();
      return rdfManager.GetRdf(v);
    }

    public Rdf GetRdf()
    {
      RdfManager rdfManager = new RdfManager();
      return rdfManager.GetRdf();
    }

    public Mdf GetMdf(string shortName)
    {
      Mdf mdf = new Mdf();
      mdf.Load(shortName);

      return mdf;
    }
  }
}
