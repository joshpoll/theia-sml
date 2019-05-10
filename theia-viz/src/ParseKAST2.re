/* goal: lambda x . x */
let idJson = {| {
  "format": "KAST",
  "version": 1,
  "term": {
    "node": "KApply",
    "label": "<k>",
    "variable": false,
    "arity": 1,
    "args": [
      {
        "node": "KApply",
        "label": "lambda_.__LAMBDA",
        "variable": false,
        "arity": 2,
        "args": [
          {
            "node": "KToken",
            "sort": "KVar",
            "token": "x"
          },
          {
            "node": "KToken",
            "sort": "KVar",
            "token": "x"
          }
        ]
      }
    ]
  }
} |};

/* input
<k>
  ( 1 + 2 * 3 ) / 4 ~> #freezer_<=__LAMBDA1_ ( 1 )
</k>
*/
/* goal
[( 1 + 2 * 3 ) / 4] <= 1
*/

let arithmetic1 = {| {
  "format": "KAST",
  "version": 1,
  "term": {
    "node": "KApply",
    "label": "<k>",
    "variable": false,
    "arity": 1,
    "args": [
      {
        "node": "KApply",
        "label": "#KSequence",
        "variable": false,
        "arity": 2,
        "args": [
          {
            "node": "KApply",
            "label": "_/__LAMBDA",
            "variable": false,
            "arity": 2,
            "args": [
              {
                "node": "KApply",
                "label": "_+__LAMBDA",
                "variable": false,
                "arity": 2,
                "args": [
                  {
                    "node": "KToken",
                    "sort": "Int",
                    "token": "1"
                  },
                  {
                    "node": "KApply",
                    "label": "_*__LAMBDA",
                    "variable": false,
                    "arity": 2,
                    "args": [
                      {
                        "node": "KToken",
                        "sort": "Int",
                        "token": "2"
                      },
                      {
                        "node": "KToken",
                        "sort": "Int",
                        "token": "3"
                      }
                    ]
                  }
                ]
              },
              {
                "node": "KToken",
                "sort": "Int",
                "token": "4"
              }
            ]
          },
          {
            "node": "KApply",
            "label": "#freezer_<=__LAMBDA1_",
            "variable": false,
            "arity": 1,
            "args": [
              {
                "node": "KToken",
                "sort": "Int",
                "token": "1"
              }
            ]
          }
        ]
      }
    ]
  }
} |}

/* input
<k>
  1 + 2 * 3 ~> #freezer_/__LAMBDA1_ ( 4 ) ~> #freezer_<=__LAMBDA1_ ( 1 )
</k>
*/
/* goal
[[( 1 + 2 * 3 )] / 4] <= 1
*/

let arithmetic2 = {|
  {
    "format": "KAST",
    "version": 1,
    "term": {
      "node": "KApply",
      "label": "<k>",
      "variable": false,
      "arity": 1,
      "args": [
        {
          "node": "KApply",
          "label": "#KSequence",
          "variable": false,
          "arity": 2,
          "args": [
            {
              "node": "KApply",
              "label": "_+__LAMBDA",
              "variable": false,
              "arity": 2,
              "args": [
                {
                  "node": "KToken",
                  "sort": "Int",
                  "token": "1"
                },
                {
                  "node": "KApply",
                  "label": "_*__LAMBDA",
                  "variable": false,
                  "arity": 2,
                  "args": [
                    {
                      "node": "KToken",
                      "sort": "Int",
                      "token": "2"
                    },
                    {
                      "node": "KToken",
                      "sort": "Int",
                      "token": "3"
                    }
                  ]
                }
              ]
            },
            {
              "node": "KApply",
              "label": "#KSequence",
              "variable": false,
              "arity": 2,
              "args": [
                {
                  "node": "KApply",
                  "label": "#freezer_/__LAMBDA1_",
                  "variable": false,
                  "arity": 1,
                  "args": [
                    {
                      "node": "KToken",
                      "sort": "Int",
                      "token": "4"
                    }
                  ]
                },
                {
                  "node": "KApply",
                  "label": "#freezer_<=__LAMBDA1_",
                  "variable": false,
                  "arity": 1,
                  "args": [
                    {
                      "node": "KToken",
                      "sort": "Int",
                      "token": "1"
                    }
                  ]
                }
              ]
            }
          ]
        }
      ]
    }
  }
|};

let arithmetic3 = {|
  {
    "format": "KAST",
    "version": 1,
    "term": {
      "node": "KApply",
      "label": "<k>",
      "variable": false,
      "arity": 1,
      "args": [
        {
          "node": "KApply",
          "label": "#KSequence",
          "variable": false,
          "arity": 2,
          "args": [
            {
              "node": "KApply",
              "label": "_*__LAMBDA",
              "variable": false,
              "arity": 2,
              "args": [
                {
                  "node": "KToken",
                  "sort": "Int",
                  "token": "2"
                },
                {
                  "node": "KToken",
                  "sort": "Int",
                  "token": "3"
                }
              ]
            },
            {
              "node": "KApply",
              "label": "#KSequence",
              "variable": false,
              "arity": 2,
              "args": [
                {
                  "node": "KApply",
                  "label": "#freezer_+__LAMBDA0_",
                  "variable": false,
                  "arity": 1,
                  "args": [
                    {
                      "node": "KToken",
                      "sort": "Int",
                      "token": "1"
                    }
                  ]
                },
                {
                  "node": "KApply",
                  "label": "#KSequence",
                  "variable": false,
                  "arity": 2,
                  "args": [
                    {
                      "node": "KApply",
                      "label": "#freezer_/__LAMBDA1_",
                      "variable": false,
                      "arity": 1,
                      "args": [
                        {
                          "node": "KToken",
                          "sort": "Int",
                          "token": "4"
                        }
                      ]
                    },
                    {
                      "node": "KApply",
                      "label": "#freezer_<=__LAMBDA1_",
                      "variable": false,
                      "arity": 1,
                      "args": [
                        {
                          "node": "KToken",
                          "sort": "Int",
                          "token": "1"
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        }
      ]
    }
  }  
  |}
type kNode =
  | Token(string)
  | Apply(list(string), list(kNode))
  | Freezer(list(string), list(kNode), int)
  | Sequence(kNode, kNode);

type kNodeKontList =
  | KLToken(string)
  | KLApply(list(string), list(kNodeKontList))
  | KLKontList(kNodeKontList, list(freezer))
and freezer = {ops: list(string), args: list(kNodeKontList), hole: int}

exception CompileError;

let rec compileKNodeToKNodeKontList = (kn : kNode) : kNodeKontList =>
  switch (kn) {
  | Token(s) => KLToken(s)
  | Apply(ss, ks) => KLApply(ss, List.map(compileKNodeToKNodeKontList, ks))
  | Sequence(Token(s), right) => KLKontList(KLToken(s), compileFreezerList(right))
  | Sequence(Apply(ss, ks), right) => KLKontList(KLApply(ss, List.map(compileKNodeToKNodeKontList, ks)), compileFreezerList(right))
  | _ => raise(CompileError)
  }
and compileFreezerList = (kn : kNode) : list(freezer) =>
switch (kn) {
| Freezer(ops, args, hole) => [{ops, args: List.map(compileKNodeToKNodeKontList, args), hole}]
| Sequence(left, right) => compileFreezerList(left) @ compileFreezerList(right)
| _ => raise(CompileError)
};

let prettyList = (ss) => {
  let rec loop = (ss) =>
    switch (ss) {
    | [] => ""
    | [s] => s
    | [s, ...ss] => s ++ ", " ++ loop(ss)
    };
  "[" ++ loop(ss) ++ "]"
};

let prettierList = (ss) => {
  let rec loop = (ss) =>
    switch (ss) {
    | [] => ""
    | [s] => s
    | [s, ...ss] => s ++ " " ++ loop(ss)
    };
  "(" ++ loop(ss) ++ ")"
};

let rec interleave = (xs, ys) =>
  switch (xs, ys) {
  | ([], _) => ys
  | ([x, ...xs], _) => [x, ...interleave(ys, xs)]
  };

let split = (list, n) => {
  let rec aux = (i, acc) => fun
    | [] => (List.rev(acc), [])
    | [h, ...t] as l => if (i == 0) { (List.rev(acc), l) }
                        else { aux(i-1, [h, ...acc], t) };
  aux(n, [], list)
};

let insert = (x, xs, i) => {
  let (xs, ys) = split(xs, i);
  xs @ [x, ...ys]
};

let rec kNodeDebugPrint = (k) =>
  switch (k) {
  | Token(s) => "Token(" ++ s ++ ")"
  | Apply(ss, args) => "Apply(" ++ prettyList(List.map((s) => "\"" ++ s ++ "\"", ss)) ++ ", " ++ prettyList(List.map(kNodeDebugPrint, args)) ++ ")"
  | Freezer(ops, args, hole) => "Freezer(" ++ prettyList(ops) ++ ", " ++ prettyList(List.map(kNodeDebugPrint, args)) ++ ", " ++ string_of_int(hole) ++ ")"
  | Sequence(left, right) => "Sequence(" ++ kNodeDebugPrint(left) ++ ", " ++ kNodeDebugPrint(right) ++ ")"
  };

let rec knklDebugPrint = (k) =>
  switch (k) {
  | KLToken(s) => "KLToken(" ++ s ++ ")"
  | KLApply(ss, args) => "KLApply(" ++ prettyList(List.map((s) => "\"" ++ s ++ "\"", ss)) ++ ", " ++ prettyList(List.map(knklDebugPrint, args)) ++ ")"
  | KLKontList(kn, fs) => "KLKontList(\n  " ++ knklDebugPrint(kn) ++ ",\n  " ++ prettyList(List.map(freezerDebugPrint, fs)) ++ ")"
  }
and freezerDebugPrint = ({ops, args, hole}) => "freezer(" ++ prettyList(ops) ++ ", " ++ prettyList(List.map(knklDebugPrint, args)) ++ ", " ++ string_of_int(hole) ++ ")"

/* let rec kNodePretty = (k) =>
  switch (k) {
  | Token(s) => s
  /* | Apply(s, args) => prettyList(s) ++ ": " ++ prettyList(List.map(kNodePretty, args)) */
  | Apply(s, args) => interleave(s, List.map(kNodePretty, args)) |> prettierList
  /* TODO: need to steal from prev Theia */
  | Kont(e, EvalContext(s, args, i)) => {
    let newArgs = insert("[" ++ kNodePretty(e) ++ "]", List.map(kNodePretty, args), i);
    interleave(s, newArgs) |> prettierList
  }
  | _ => Js.log(kNodeDebugPrint(k)); failwith("node pretty found a structure it shouldn't")
  }; */


let rec knklPretty = (k) =>
  switch (k) {
  | KLToken(s) => s
  | KLApply(ops, args) => interleave(ops, List.map(knklPretty, args)) |> prettierList
  | KLKontList(kn, fs) => prettyKontList(kn, List.rev(fs))
}
and prettyFreeze = (f, arg) => {
  let newArgs = insert("[" ++ arg ++ "]", List.map(knklPretty, f.args), f.hole);
  interleave(f.ops, newArgs) |> prettierList
}
/* TODO: might need to reverse the fs */
and prettyKontList = (kn, fs) =>
  switch (fs) {
  | [] => knklPretty(kn)
  | [f, ...fs] => prettyFreeze(f, prettyKontList(kn, fs))
  };

let cleanLabel = (s) => {
  let suffix = "_LAMBDA";
  if (Js.String.endsWith(suffix, s)) {
    Js.String.substring(s, ~from=0, ~to_=(Js.String.length(s) - Js.String.length(suffix)))
  } else {
    s
  }
};

/* extracts name from a freezer */
let extractName = (s) => {
  Js.String.substring(~from=8, ~to_=Js.String.length(s) - 9, s);
}

module Decode = {
  open Json.Decode;

  /* unneccesary function wrapping to skirt let rec limitations */
  let rec kNode = (json) => {
    (field("node", string) |> andThen(
      fun (s) =>
        switch (s) {
        | "KToken" => kToken
        | "KApply" => kApply
        | _ => failwith("Unknown node type")
        }
    ))(json)
  }
  and kToken = (json) => {
    Token(json |> field("token", string))
  }
  and kApply = (json) => {
    (field("label", string) |> andThen(
      fun (s) =>
        switch (s) {
        | "#KSequence" => seq
        | _ when Js.String.startsWith("#freezer", s) => freezer
        | _ => apply
        }
    ))(json)
  }
  and apply = (json) => {
    Apply(
      json |> field("label", string) |> cleanLabel |> Js.String.split("_") |> Array.to_list,
      json |> field("args", list(kNode))
    )
  }
  and freezer = (json) => {
    let label = json |> field("label", string);
    let holePos = 1 - (label |> Js.String.charAt(Js.String.length(label) - 2) |> int_of_string);
    Freezer(
      label |> extractName |> Js.String.split("_") |> Array.to_list,
      json |> field("args", list(kNode)),
      holePos
    )
  }
  and seq = (json) => {
    let (left, right) = json |> field("args", pair(kNode, kNode));
    Sequence(left, right)
  };

  let kAst = (json) => json |> field("term", kNode);
};  

let decode = (json) => json |> Json.parseOrRaise |> Decode.kAst;

let handleClick = (_event) => {
  /* Js.log(arithmetic2 |> decode |> kNodeDebugPrint); */
  Js.log(arithmetic1 |> decode |> compileKNodeToKNodeKontList |> knklDebugPrint);
  Js.log(arithmetic2 |> decode |> compileKNodeToKNodeKontList |> knklDebugPrint);
  Js.log(arithmetic1 |> decode |> compileKNodeToKNodeKontList |> knklPretty);
  Js.log(arithmetic2 |> decode |> compileKNodeToKNodeKontList |> knklPretty);
  Js.log(arithmetic3 |> decode |> compileKNodeToKNodeKontList |> knklPretty);
};

[@react.component]
let make = () =>
  <div onClick={handleClick}>
    {ReasonReact.string("foo bar")}
  </div>;
