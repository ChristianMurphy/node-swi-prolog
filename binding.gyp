{
  "targets": [
    {
      "target_name": "Prolog",
      "sources": [
        "source/Prolog.cc"
      ],
      "include_dirs" : [
        "<!(node -e \"require('nan')\")",
        "source",
        "$(SWI_HOME_DIR)"
      ],
      "direct_dependent_settings": {
        "linkflags": [
          "-D_FILE_OFFSET_BITS=64",
          "-D_LARGEFILE_SOURCE"
        ]
      },
      "libraries": [
        "-lswipl"
      ]
    }
  ]
}
