<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * Foo
 */
class Foo implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'fiels',
      'type' => \TType::I32,
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'fiels' => 1,
  };
  const int STRUCTURAL_ID = 3168813896074353984;
  /**
   * Original thrift field:-
   * 1: i32 fiels
   */
  public int $fiels;

  public function __construct(?int $fiels = null  ) {
    if ($fiels === null) {
      $this->fiels = 0;
    } else {
      $this->fiels = $fiels;
    }
  }

  public function getName(): string {
    return 'Foo';
  }

}

/**
 * Original thrift struct:-
 * Bar
 */
class Bar implements \IThriftStruct {
  use \ThriftSerializationTrait;

  public static dict<int, dict<string, mixed>> $_TSPEC = dict[
    1 => dict[
      'var' => 'a',
      'type' => \TType::SET,
      'etype' => \TType::STRUCT,
      'elem' => dict[
        'type' => \TType::STRUCT,
        'class' => 'Foo',
        ],
        'format' => 'collection',
      ],
    2 => dict[
      'var' => 'b',
      'type' => \TType::MAP,
      'ktype' => \TType::STRUCT,
      'vtype' => \TType::I32,
      'key' => dict[
        'type' => \TType::STRUCT,
        'class' => 'Foo',
      ],
      'val' => dict[
        'type' => \TType::I32,
        ],
        'format' => 'collection',
      ],
    ];
  public static Map<string, int> $_TFIELDMAP = Map {
    'a' => 1,
    'b' => 2,
  };
  const int STRUCTURAL_ID = 5283012534631553068;
  /**
   * Original thrift field:-
   * 1: set<struct module.Foo> a
   */
  public Set<arraykey> $a;
  /**
   * Original thrift field:-
   * 2: map<struct module.Foo, i32> b
   */
  public Map<arraykey, int> $b;

  public function __construct(?Set<arraykey> $a = null, ?Map<arraykey, int> $b = null  ) {
    if ($a === null) {
      $this->a = Set {};
    } else {
      $this->a = $a;
    }
    if ($b === null) {
      $this->b = Map {};
    } else {
      $this->b = $b;
    }
  }

  public function getName(): string {
    return 'Bar';
  }

}

