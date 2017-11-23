let component = ReasonReact.statelessComponent("App");


let tempRunData: list(RunCard.run) = [
  {name: "hello world", pace: "8:30", time: "60m", distance: "7mi"},
  {name: "test", pace: "8:30", time: "60m", distance: "7mi"},
  {name: "hello world", pace: "8:30", time: "60m", distance: "7mi"},
  {name: "hello world", pace: "8:30", time: "60m", distance: "7mi"},
  {name: "test", pace: "8:30", time: "60m", distance: "7mi"},
  {name: "test", pace: "8:30", time: "60m", distance: "7mi"}
];

let make = (_children) => {
  ...component,
  render: (_self) =>
    <div className="w-100 w-70-l center">
      <div className="ph3 ph0-l flex items-center justify-between pv3">
        <a className="f2 no-underline black serif" href="/">
          (ReasonReact.stringToElement("ReRun"))
        </a>
        <div className="flex">
          <div className="ml4 b"> (ReasonReact.stringToElement("Summary")) </div>
          <div className="ml4 b"> (ReasonReact.stringToElement("Runs")) </div>
          <div className="ml4 b"> (ReasonReact.stringToElement("About")) </div>
        </div>
      </div>
      <div className="bg-red">
        <div className="w-50-l w-100 fl"> (ReasonReact.stringToElement("test")) </div>
        <div className="w-50-l w-100 fl">
          (
            tempRunData
            |> List.mapi((i, run) => <RunCard key=(string_of_int(i)) run />)
            |> Array.of_list
            |> ReasonReact.arrayToElement
          )
        </div>
      </div>
    </div>
};
