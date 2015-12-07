{
  "targets": [
    {
      "target_name": "prolog",
      "sources": [
        "source/Node-Prolog.cc"
      ],
      "include_dirs" : [
        "<!(node -e \"require('nan')\")",
        "source"
      ]
    }
  ]
}
