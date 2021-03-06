..
    Warning: Do not edit this file. It is automatically generated from the
    software project's code and your changes will be overwritten.

    The tool to generate this file lives in openstack-doc-tools repository.

    Please make any changes needed in the code, then run the
    autogenerate-config-doc tool from the openstack-doc-tools repository, or
    ask for help on the documentation mailing list, IRC channel or meeting.

.. _cinder-backups_tsm:

.. list-table:: Description of IBM Tivoli Storage Manager backup driver configuration options
   :header-rows: 1
   :class: config-ref-table

   * - Configuration option = Default value
     - Description
   * - **[DEFAULT]**
     -
   * - ``backup_tsm_compression`` = ``True``
     - (Boolean) Enable or Disable compression for backups
   * - ``backup_tsm_password`` = ``password``
     - (String) TSM password for the running username
   * - ``backup_tsm_volume_prefix`` = ``backup``
     - (String) Volume prefix for the backup id when backing up to TSM
